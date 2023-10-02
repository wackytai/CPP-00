#include "PhoneBook.hpp"

PhoneBook:: PhoneBook()
{
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
		std::cout << "Limit of contacts reached" << std::endl;
		return 1;
	}
	else if (value.empty())
	{
		std::cout << "Cannot add contact: Empty field entered" << std::endl;
		return 1;
	}
	else
	{
		switch(field)
		{
			case 0:
				_contacts[_currentSize].set_first_name(value);
				break ;
			case 1:
				_contacts[_currentSize].set_last_name(value);
				break ;
			case 2:
				_contacts[_currentSize].set_nickname(value);
				break ;
			case 3:
				_contacts[_currentSize].set_phone_number(value);
				break ;
			case 4:
				_contacts[_currentSize].set_secret(value);
				this->_currentSize++;
				break ;
		}
	}
	return 0;
}

int	PhoneBook::search_contact(void)
{
	std::string input;

	printList();
	std::cout << "Input Contact Index:" << std::endl;
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cin.clear();
		std::cin.ignore((unsigned int)input.length() - 1, '\n');
		return 1;
	}
	printContact(std::atoi(input.c_str()));
	std::cin.ignore((unsigned int)input.length() - 1, '\n');
	return 0;
}

void	PhoneBook::printContact(int index)
{
	if (index > _currentSize || index < 0 || !_currentSize)
		std::cout << "Index out of range: Can't find contact specified" << std::endl;
	else
	{
		std::cout << "Index: " << index << std::endl;
		std::cout << "First Name: " << _contacts[index].get_first_name() << std::endl;
		std::cout << "Last Name: " << _contacts[index].get_last_name() << std::endl;
		std::cout << "Nickname: " << _contacts[index].get_nickname() << std::endl;
		std::cout << "Phone Number: " << _contacts[index].get_phone_number() << std::endl;
		std::cout << "Darkest Secret: " << _contacts[index].get_secret() << std::endl;
	}
	std::cout << std::endl;
}

void	PhoneBook::printList(void)
{
	std::cout << "     Index" << "|" << "First Name" << "|" << " Last Name" << "|" << "  Nickname" << std::endl;  
	for (int i = 0; i < _currentSize; i++)
	{
		std::cout << "         " << i << "|";
		printField(_contacts[i].get_first_name());
		std::cout << "|";
		printField(_contacts[i].get_last_name());
		std::cout << "|";
		printField(_contacts[i].get_nickname());
		std::cout << std::endl;
	}
}

void	PhoneBook::printField(std::string field)
{
	size_t	len;

	len = field.length();
	for (int i = 0; i < 10; i++)
	{
		if (i == 9 && len > 10)
			std::cout << ".";
		else if (field[i])
		{
			if (len < 10 && !i)
				for (size_t j = 0; j < (10 - len); j++)
					std::cout << " ";
			std::cout << field[i];
		}
		else
			break ;
	}
}
