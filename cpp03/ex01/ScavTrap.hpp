#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(const ScavTrap &cpy);
		ScavTrap(void);
		ScavTrap&	operator=(const ScavTrap &a);
		void		attack(std::string const &target);
		void		guardGate(void);
	private:
		bool	_Gate;
};

#endif