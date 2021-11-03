#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class Bureaucrat {
	public:
		Bureaucrat(std::string const & name, int grade);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &cpy);
		Bureaucrat &	operator=(const Bureaucrat &a);
		std::string const &	getName() const;
		int				getGrade() const;
		void			incGrade(unsigned int amount);
		void			decGrade(unsigned int amount);
	private:
		std::string const _name;
		int	_grade;
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("HIGH");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("LOW");
				}
		};
};

std::ostream&	operator<<(std::ostream &o, Bureaucrat const &i);

#endif