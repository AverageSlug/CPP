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

void			Bureaucrat::signForm(Form & F) {
	try {
		F.beSigned(*this);
	}
	catch (GradeTooLowException& L) {
		std::cout << _name << " cannot sign " << F.getName() << " because their grade is too low" << std::endl;
		return ;
	}
	catch (Form::FormAlreadySignedException& S) {
		std::cout << S.what() << std::endl;
		return ;
	}
	std::cout << _name << " signs " << F.getName() << std::endl;
}

void		Bureaucrat::executeForm(Form const & form) {
	try {
		form.execute(*this);
	}
	catch (GradeTooLowException& L) {
		std::cout << _name << " cannot execute " << form.getName() << " because their grade is too low" << std::endl;
	}
	catch (Form::FormNotSignedException& S) {
		std::cout << S.what() << std::endl;
		return ;
	}
}

std::ostream&	operator<<(std::ostream &o, Bureaucrat const &i) {
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return (o);
}