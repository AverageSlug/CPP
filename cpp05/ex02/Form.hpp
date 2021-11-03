#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form(std::string const & name, int const grade_to_sign, int const grade_to_exec);
		~Form(void);
		Form(const Form &cpy);
		Form&	operator=(const Form &a);
		bool			getSignature() const;
		std::string const &	getName() const;
		int				getGradetoSign() const;
		int				getGradetoExec() const;
		void			beSigned(Bureaucrat & B);
	private:
		bool	_signature;
		std::string const _name;
		int			const _grade_to_sign;
		int			const _grade_to_exec;
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("FHIGH");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("FLOW");
				}
		};
};

std::ostream&	operator<<(std::ostream &o, Form const &i);

#endif