#pragma once

#include <iostream>

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_secret;

	public:
		Contact();
		~Contact();
		void	set_first_name(std::string name);
		void	set_last_name(std::string name);
		void	set_nickname(std::string name);
		void	set_phone_number(std::string number);
		void	set_secret(std::string secret);
		const std::string	get_first_name(void) const;
		const std::string	get_last_name(void) const;
		const std::string	get_nickame(void) const;
		const std::string	get_phone_number(void) const;
		const std::string	get_secret(void) const;
};
