#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {
	public:
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap(const ClapTrap &cpy);
		ClapTrap(void);
		ClapTrap&	operator=(const ClapTrap &a);
		void		attack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
	protected:
		std::string	_Name;
		int			_Hitpoints;
		int			_Energy_points;
		int			_Attack_damage;
};

#endif