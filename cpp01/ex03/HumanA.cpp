#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _weapon(type) {
	_name = name;
}

HumanA::~HumanA(void) {
}

void	HumanA::attack(void) {
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon &type) {
	_weapon = type;
}