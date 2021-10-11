#include "phonebook.hpp"

phonebook::phonebook(void)
{
}

phonebook::~phonebook(void)
{
}

contact::contact(void)
{
}

contact::~contact(void)
{
}

void	contact::set_data(int field, std::string value)
{
	if (field == 0)
		contact::_first_name = value;
	else if (field == 1)
		contact::_last_name = value;
	else if (field == 2)
		contact::_nickname = value;
	else if (field == 3)
		contact::_phone_number = value;
	else if (field == 4)
		contact::_darkest_secret = value;
	return ;
}

std::string	contact::get_data(int field)
{
	if (field == 0)
		return (contact::_first_name);
	else if (field == 1)
		return (contact::_last_name);
	else if (field == 2)
		return (contact::_nickname);
	else if (field == 3)
		return (contact::_phone_number);
	else if (field == 4)
		return (contact::_darkest_secret);
	return (NULL);
}
