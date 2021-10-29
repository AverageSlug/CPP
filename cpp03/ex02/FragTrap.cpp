#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap Constructor Called" << std::endl;
	_Name = name;
	_Hitpoints = 100;
	_Energy_points = 100;
	_Attack_damage = 30;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap Destructor Called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy) {
	*this = cpy;
}

FragTrap::FragTrap(void) {
}

FragTrap&	FragTrap::operator=(const FragTrap &a) {
	_Name = a._Name;
	_Hitpoints = a._Hitpoints;
	_Energy_points = a._Energy_points;
	_Attack_damage = a._Attack_damage;
	return (*this);
}

void		FragTrap::highFivesGuys(void) {
		if (_Energy_points - 5 < 0)
	{
		std::cout << _Name << " doesn't have enough energy points left to high fives!" << std::endl;
		std::cout << std::endl;
		return ;
	}
	_Energy_points -= 5;
	if (_Energy_points < 0)
		_Energy_points = 0;
	std::cout << _Name << " used 5 energy points to high fives!" << std::endl;
	std::cout << _Name << " has " << _Energy_points << " energy point(s) remaining." << std::endl;
	std::cout << std::endl;
}