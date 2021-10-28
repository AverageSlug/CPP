#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) {
	_name = name;
	_weapon = &type;
}

HumanA::~HumanA(void) {
}

void	HumanA::attack(void) {
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

void	HumanA::setWeapon(Weapon &type) {
	_weapon = &type;
}

HumanA::HumanA(void) {
}