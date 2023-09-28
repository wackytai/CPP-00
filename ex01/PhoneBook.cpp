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

int	PhoneBook::add_contact(void)
{
	std::string	str;
	std::string	prompt;

	for(int i = 0; i < 5; i++)
	{
		switch(i){
			case 0:
				prompt = "First Name";
				break ;
			case 1:
				prompt = "Last Name";
				break ;
			case 2:
				prompt = "Nickname";
				break ;
			case 3:
				prompt = "Phone Number";
				break ;
			case 4:
				prompt = "Darkest Secret";
				break ;
		}
		std::cout << "Input " << prompt << ": "; 
		std::getline(std::cin, str);
		if (std::cin.eof())
			return 1;
	}
	this->_index++;
	this->_currentSize++;
	return 0;
}

int	PhoneBook::search_contact(void)
{
	return 0;
}
