#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form(std::string const & name, int const grade_to_sign, int const grade_to_exec);
		~Form();
		Form(const Form &cpy);
		Form&	operator=(const Form &a);
		bool			getSignature() const;
		std::string const &	getName() const;
		int	const		getGradetoSign() const;
		int	const		getGradetoExec() const;
		void			beSigned(Bureaucrat & B);
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Form: Grade too high");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Form: Grade too low");
				}
		};
		class FormAlreadySignedException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Form: Already signed");
				}
		};
	protected:
		Form();
	private:
		bool	_signature;
		std::string const _name;
		int			const _grade_to_sign;
		int			const _grade_to_exec;
};

std::ostream&	operator<<(std::ostream &o, Form const &i);

#endif