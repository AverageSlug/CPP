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
		void	makeForm(std::string const & form, std::string const & target);
};

#endif