#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : Form("Presidential Pardon Form", 25, 5), _target(target) {
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : Form(cpy) {
	*this = cpy;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &a) {
	return (*this);
}

void	PresidentialPardonForm::doAction(Bureaucrat const &executor) const {
	std::cout << _target << "was pardoned by Zafod Beeblebrox" << std::endl; 
}