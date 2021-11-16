#include "Intern.hpp"

Intern::Intern(void) {
	_fnc[0] = &Intern::_ShrubberyCreationForm;
	_form[0] = "shrubbery creation";
	_fnc[1] = &Intern::_RobotomyRequestForm;
	_form[1] = "robotomy request";
	_fnc[2] = &Intern::_PresidentialPardonForm;
	_form[2] = "presidential pardon";
}

Intern::~Intern(void) {
}

Intern::Intern(const Intern &cpy) {
	*this = cpy;
}

Intern&	Intern::operator=(const Intern &a) {
	(void)a;
	return (*this);
}

Form	*Intern::makeForm(std::string const & form, std::string const & target) {
	Intern	tmp;

	for (int i = 0; i < 3; i++) {
		if (form == _form[i])
			return (tmp.*_fnc[i])(target);
	}
	std::cout << "Bad form name" << std::endl;
	return (NULL);
}

Form	*Intern::_ShrubberyCreationForm(std::string target) {
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::_RobotomyRequestForm(std::string target) {
	return (new RobotomyRequestForm(target));
}

Form	*Intern::_PresidentialPardonForm(std::string target) {
	return (new PresidentialPardonForm(target));
}