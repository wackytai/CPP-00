#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _contacts[8];
		int		_index;
		int		_currentSize;
	public:
		PhoneBook();
		~PhoneBook();

		int		add_contact(std::string value, int field);
		int		search_contact(void);
		void	printField(std::string field);
		void	printList(void);
		void	printContact(int index);
};
