#include "Bureaucrat.hpp"
	
Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name) {
	try {
		_grade = grade;
		if (_grade < 1)
			throw GradeTooHighException();
		if (_grade > 150)
			throw GradeTooLowException();
	}
	catch (GradeTooHighException& H) {
		std::cout << H.what() << std::endl;
	}
	catch (GradeTooLowException& L) {
		std::cout << L.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat(void) {
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) {
	*this = cpy;
}

Bureaucrat &	Bureaucrat::operator=(const Bureaucrat &a) {
	_grade = a._grade;
	return (*this);
}

std::string const &	Bureaucrat::getName() const {
	return (_name);
}

int				Bureaucrat::getGrade() const {
	return (_grade);
}

void			Bureaucrat::incGrade(unsigned int amount) {
	try {
		_grade -= amount;
		if (_grade < 1)
			throw GradeTooHighException();
	}
	catch (GradeTooHighException& H) {
		std::cout << H.what() << std::endl;
	}
}

void			Bureaucrat::decGrade(unsigned int amount) {
	try {
		_grade += amount;
		if (_grade > 150)
			throw GradeTooLowException();
	}
	catch (GradeTooLowException& L) {
		std::cout << L.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream &o, Bureaucrat const &i) {
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return (o);
}