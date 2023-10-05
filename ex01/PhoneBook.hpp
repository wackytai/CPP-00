#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <limits>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _contacts[8];
		int		_currentSize;
		int		_index;
	public:
		PhoneBook();
		~PhoneBook();

		int		add_contact(std::string value, int field);
		int		search_contact(void);
		void	printField(std::string field);
		int		printList(void);
		void	printContact(int index);
};
