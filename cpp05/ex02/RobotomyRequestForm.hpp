#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include <time.h>

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm(std::string const & target);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &cpy);
		RobotomyRequestForm&	operator=(const RobotomyRequestForm &a);
		void	doAction() const;
	private:
		std::string	_target;
};

#endif