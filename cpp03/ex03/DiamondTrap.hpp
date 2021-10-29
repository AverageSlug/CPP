#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap(std::string name);
		~DiamondTrap(void);
		DiamondTrap(const DiamondTrap &cpy);
		DiamondTrap(void);
		DiamondTrap&	operator=(const DiamondTrap &a);
		void			attack(std::string const &target);
		void			whoAmI(void);
	private:
		std::string	_Name;
};

#endif