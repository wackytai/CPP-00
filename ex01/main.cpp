#include "PhoneBook.hpp"
#include "Contact.hpp"

int	get_info(PhoneBook &myPhoneBook);
int	validate_input(std::string input, int field);
int	get_index(PhoneBook &myPhoneBook);

int	main(void)
{
	PhoneBook	myPhoneBook;
	std::string	str;
	
	while (1)
	{
		std::cout << "Choose between: ADD, SEARCH and EXIT\n> ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return 0;
		std::cin.clear();
		if (str == "ADD")
			get_info(myPhoneBook);
		else if (str == "SEARCH")
			get_index(myPhoneBook);
		else if (str == "EXIT")
			break ;
		else
			std::cout << "Not a valid input" << std::endl;
	}
	return 0;
}
int	get_info(PhoneBook &myPhoneBook)
{
	std::string	value;
	std::string	prompt;

	for (int i = 0; i < 5; i++)
	{
		switch(i)
		{
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
		std::getline(std::cin, value);
		if (std::cin.eof())
		{
			prompt.clear();
			value.clear();
			return 1;
		}
		if (validate_input(value, i))
		{
			std::cout << "Wrong input for field. Start Again" << std::endl;
			return 1;
		}
		else if (myPhoneBook.add_contact(value, i))
			return 1;
	}
	return 0;
}

int	validate_input(std::string input, int field)
{
	switch (field)
	{
		case 0: case 1: case 2: case 4:
			for (int i = 0; input[i]; i++)
				if (!std::isalpha(input[i]) && input[i] != 32)
					return 1;
			break ;
		case 3:
			for (int i = 0; input[i]; i++)
				if (!std::isdigit(input[i]))
					return 1;
			break ;
	}
	return 0;
}

int	get_index(PhoneBook &myPhoneBook)
{
	int	input;

	std::cout << "Input contact index: ";
	std::cin >> input;
	myPhoneBook.search_contact(input);
	std::cin.ignore();
	return 0;
}
