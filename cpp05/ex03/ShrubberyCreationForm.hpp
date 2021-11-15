#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm(std::string const & target);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &a);
		void	doAction() const;
	private:
		std::string	_target;
};

#endif