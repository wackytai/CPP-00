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
		void	set_first_name(std::string name);
		void	set_last_name(std::string name);
		void	set_nickname(std::string name);
		void	set_phone_number(std::string number);
		void	set_secret(std::string secret);
		std::string	get_first_name(std::string name);
		std::string	get_last_name(std::string name);
		std::string	get_nickame(std::string name);
		std::string	get_phone_number(std::string number);
		std::string	get_secret(std::string secret);
};