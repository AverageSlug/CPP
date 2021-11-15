#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class Bureaucrat {
	public:
		Bureaucrat(std::string const & name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &cpy);
		Bureaucrat &	operator=(const Bureaucrat &a);
		std::string const &	getName() const;
		int				getGrade() const;
		void			incGrade();
		void			decGrade();
	protected:
		Bureaucrat();
	private:
		std::string const _name;
		int	_grade;
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Bureaucrat: Grade too high");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Bureaucrat: Grade too low");
				}
		};
};

std::ostream&	operator<<(std::ostream &o, Bureaucrat const &i);

#endif