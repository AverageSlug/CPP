#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include <iomanip>
# include <string>
# include "contact.hpp"

class phonebook
{
	public:
		phonebook(void);
		~phonebook(void);
		contact cdata[8];
};

#endif