#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(const FragTrap &cpy);
		FragTrap(void);
		FragTrap&	operator=(const FragTrap &a);
		void		highFivesGuys(void);
};

#endif