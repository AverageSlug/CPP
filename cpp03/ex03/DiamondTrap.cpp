#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name), _Name(name) {
	std::cout << "DiamondTrap Constructor Called" << std::endl;
	ClapTrap::_Name = name + "_clap_name";
	_Hitpoints = FragTrap::_Hitpoints;
	_Energy_points = ScavTrap::_Energy_points;
	_Attack_damage = FragTrap::_Attack_damage;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap Destructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy) {
	*this = cpy;
}

DiamondTrap::DiamondTrap(void) {
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &a) {
	_Name = a._Name;
	ClapTrap::_Name = a.ClapTrap::_Name;
	_Hitpoints = a._Hitpoints;
	_Energy_points = a._Energy_points;
	_Attack_damage = a._Attack_damage;
	return (*this);
}

void		DiamondTrap::attack(std::string const &target) {
	ScavTrap::attack(target);
}

void		DiamondTrap::whoAmI(void) {
	std::cout << "DiamondTrap name: " << _Name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_Name << std::endl;
	std::cout << std::endl;
}