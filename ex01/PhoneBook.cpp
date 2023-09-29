#include "PhoneBook.hpp"

PhoneBook:: PhoneBook()
{
	_index = 0;
	_currentSize = 0;
	// std::cout << "PhoneBook constructor called\n";
}

PhoneBook:: ~PhoneBook()
{
	// std::cout << "PhoneBook destructor called\n";
}

int	PhoneBook::add_contact(std::string value, int field)
{
	if (_currentSize >= 7)
	{
		std::cout << "Limit of contacts reached\n";
		return 1;
	}
	else if (value.empty())
	{
		std::cout << "Cannot add contact: Empty field entered\n";
		return 1;
	}
	else
	{
		switch(field)
		{
			case 0:
				_contacts[_index].set_first_name(value);
				break ;
			case 1:
				_contacts[_index].set_last_name(value);
				break ;
			case 2:
				_contacts[_index].set_nickname(value);
				break ;
			case 3:
				_contacts[_index].set_phone_number(value);
				break ;
			case 4:
				_contacts[_index].set_secret(value);
				this->_index++;
				this->_currentSize++;
				break ;
		}
	}
	return 0;
}

int	PhoneBook::search_contact(int index)
{
	if (index > _currentSize || index < 0 || !_currentSize)
	{
		std::cout << "Index out of range: Can't find contact speficied\n";
		return 1;
	}
	else
	{
		std::cout << index << "|";
		printField(_contacts[index].get_first_name());
		std::cout << "|";
		printField(_contacts[index].get_last_name());
		std::cout << "|";
		printField(_contacts[index].get_nickname());
		std::cout << std::endl;
		return 0;
	}
}

void	PhoneBook::printList(void)
{
	for (int i = 0; i < _currentSize; i++)
	{
		std::cout << _contacts[i].get_first_name() << " "
		<< _contacts[i].get_last_name() << " "
		<< _contacts[i].get_nickname() << " "
		<< _contacts[i].get_phone_number() << " "
		<< _contacts[i].get_secret();
		std::cout << std::endl;
	}
}

void	PhoneBook::printField(std::string field)
{
	for (int i = 0; i < 10; i++)
	{
		if (i == 9 && field[i + 1])
			std::cout << ".";
		else if (field[i])
			std::cout << field[i];
		else
			break ;
	}
}
