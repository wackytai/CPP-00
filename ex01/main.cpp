#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	str;
	
	while (1)
	{
		std::cout << "Choose between: ADD, SEARCH and EXIT\n> ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return 0;
		std::cin.clear();
		if (str == "ADD")
		{
			
			phonebook.add_contact();
		}
		else if (str == "SEARCH")
			phonebook.search_contact();
		else if (str == "EXIT")
			return 0;
	}
	return 0;
}

int	get_info(std::string field, int flag)
{
	std::string	str;
	while (1)
	{
		std::cout << "Input " << field << ": ";
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			str.clear();
			return 0;
		}
		std::cin.clear();
	}
	return 0;
}
