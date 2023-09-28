#pragma once

#include <iostream>
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

		int	add_contact(void);
		int	search_contact(void);
};
