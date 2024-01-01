#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( void )
{
    std::cout << "Private Constructor called" << std::endl;
}

Account::Account( int initial_deposit )
{
    Account *list;
    std::cout << " Public Constructor called" << std::endl;
    list[_accountIndex]._accountIndex = _nbAccounts;
    _nbAccounts++;
    list[_accountIndex]._amount = initial_deposit;
    _totalAmount += list[_accountIndex]._amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    displayStatus();
    std::cout << "created" << std::endl;
}

Account::~Account( void )
{
    std::cout << "Destructor called" << std::endl;
    displayStatus();
    std::cout << "closed" << std::endl;

}

static int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}

static int	Account::getTotalAmount( void )
{
    return _totalAmount;
}

static int	Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

static int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

static void	displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";"
    << "amount:" << getTotalAmount() << ";"
    << "deposits:" << getNbDeposits() << ";"
    << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    this->_amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if ((withdrawal > this->checkAmount()) ? false : true)
    {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        return true;
    }
    else
        return false;
}

int		Account::checkAmount( void ) const
{
    return(this->_amount);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex
    << "amount:" << this->_amount << ";";
}

static void	_displayTimestamp( void )
{
    char        *buffer;
    size_t      maxsize = 18;
    time_t      rawtime;
    struct tm   *timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(buffer, maxsize, "[%Y%m%d_%H%M%S]", timeinfo);
    std::cout << buffer << " " << std::flush;  
}
