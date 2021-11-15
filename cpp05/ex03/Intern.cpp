#include "Intern.hpp"

Intern::Intern(void) {
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

Form&	makeForm(std::string const & form, std::string const & target) {
	Form *tmp;
	std::string	fv[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form(*f[3])()(std::string) = {ShrubberyCreationForm(target), RobotomyRequestForm(target), PresidentialPardonForm(target)};
	for (int i = 0; i < 3; i++) {
		if (form == fv[i])
			return (tmp->*f[i](target));
	}
}