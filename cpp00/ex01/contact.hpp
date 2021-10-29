#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class contact
{
	public:
		contact(void);
		~contact(void);
		void		set_data(int field, std::string value);
		std::string	get_data(int field);
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif