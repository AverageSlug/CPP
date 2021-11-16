#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm(std::string const & target);
		~PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm &cpy);
		PresidentialPardonForm&	operator=(const PresidentialPardonForm &a);
		void	doAction() const;
	private:
		std::string	_target;
};

#endif