#ifndef INTERN_HPP
# define INTERN_HPP
# include "form.h"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <iostream>

class Intern {
	public:
		Intern(void);
		~Intern(void);
		Intern(const Intern &cpy);
		Intern&	operator=(const Intern &a);
		Form	*makeForm(std::string const & form, std::string const & target);
		typedef Form* (Intern::*fp)(std::string);
	private:
		std::string _form[3];
		fp _fnc[3];
		Form*	_ShrubberyCreationForm(std::string target);
		Form*	_RobotomyRequestForm(std::string target);
		Form*	_PresidentialPardonForm(std::string target);
};

#endif