#include "Contact.hpp"

Contact::Contact() 
{
	// std::cout << "Contact constructor called\n";
}

Contact::~Contact()
{
	// std::cout << "Contact destructor called\n";
}

void	Contact::set_first_name(std::string name)
{
	this->_firstName = name;
}

void	Contact::set_last_name(std::string name)
{
	this->_lastName = name;
}

void	Contact::set_nickname(std::string name)
{
	this->_nickname = name;
}

void	Contact::set_phone_number(std::string number)
{
	this->_phoneNumber = number;
}

void	Contact::set_secret(std::string secret)
{
	this->_secret = secret;
}

const std::string	Contact::get_first_name(void) const
{
	return (this->_firstName);
}

const std::string	Contact::get_last_name(void) const
{
	return (this->_lastName);
}

const std::string	Contact::get_nickame(void) const
{
	return (this->_nickname);
}

const std::string	Contact::get_phone_number(void) const
{
	return (this->_phoneNumber);
}

const std::string	Contact::get_secret(void) const
{
	return (this->_secret);
}
