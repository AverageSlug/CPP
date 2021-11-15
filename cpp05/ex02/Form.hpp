#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form();
		Form(std::string const & name, int const grade_to_sign, int const grade_to_exec);
		virtual ~Form();
		Form(const Form &cpy);
		Form&	operator=(const Form &a);
		bool			getSignature() const;
		std::string const &	getName() const;
		int				getGradetoSign() const;
		int				getGradetoExec() const;
		void			beSigned(Bureaucrat & B);
		void			execute(Bureaucrat const & executor) const;
		virtual void	doAction(Bureaucrat const & executor) const = 0;
	private:
		bool	_signature;
		std::string const _name;
		int			const _grade_to_sign;
		int			const _grade_to_exec;
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Form::GradeTooHighException");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Form::GradeTooLowException");
				}
		};
};

std::ostream&	operator<<(std::ostream &o, Form const &i);

#endif