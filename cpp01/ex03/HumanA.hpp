#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon &type);
		~HumanA(void);
		void	attack(void);
		void	setWeapon(Weapon &type);
	private:
		std::string _name;
		Weapon &_weapon;
		HumanA(void);
};

#endif