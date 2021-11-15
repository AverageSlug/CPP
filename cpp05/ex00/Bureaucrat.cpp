#include "Bureaucrat.hpp"
	
Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name), _grade(grade) {
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : _name(cpy._name), _grade(cpy._grade) {
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
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

void			Bureaucrat::incGrade() {
	_grade--;
	if (_grade < 1)
		throw GradeTooHighException();
}

void			Bureaucrat::decGrade() {
	_grade++;
	if (_grade > 150)
		throw GradeTooLowException();
}

std::ostream&	operator<<(std::ostream &o, Bureaucrat const &i) {
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return (o);
}