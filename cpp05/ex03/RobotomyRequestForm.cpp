#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : Form("Robotomy Request Form", 72, 45), _target(target) {
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : Form(cpy) {
	*this = cpy;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &a) {
	(void)a;
	return (*this);
}

void	RobotomyRequestForm::doAction() const {
	srand(time(NULL));
	if (rand()%2 > 0)
		std::cout << _target << " was successfully robotomized!" << std::endl;
	else
		std::cout << _target << "'s robotomization failed" << std::endl;
}