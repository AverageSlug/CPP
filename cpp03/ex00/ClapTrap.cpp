#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap Constructor Called" << std::endl;
	_Name = name;
	_Hitpoints = 10;
	_Energy_points = 10;
	_Attack_damage = 0;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy) {
	*this = cpy;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &a) {
	_Name = a._Name;
	_Hitpoints = a._Hitpoints;
	_Energy_points = a._Energy_points;
	_Attack_damage = a._Attack_damage;
	return (*this);
}

void		ClapTrap::attack(std::string const &target) {
	if (_Energy_points - 10 < 0)
	{
		std::cout << _Name << " doesn't have enough energy points left to attack!" << std::endl;
		std::cout << std::endl;
		return ;
	}
	std::cout << _Name << " used 10 energy points to attack " << target << "!" << std::endl;
	if (_Attack_damage)
		std::cout << target << " was dealt " << _Attack_damage << " point(s) of damage!" << std::endl;
	else
		std::cout << target << " was dealt no damage." << std::endl;
	_Energy_points -= 10;
	if (_Energy_points < 0)
		_Energy_points = 0;
	std::cout << _Name << " has " << _Energy_points << " energy point(s) remaining." << std::endl;
	std::cout << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount) {
	if (!_Hitpoints)
		std::cout << _Name << " is already destroyed." << std::endl;
	else
	{
		_Hitpoints -= amount;
		if (_Hitpoints < 0)
			_Hitpoints = 0;
		if (amount)
			std::cout << _Name << " recieved " << amount << " point(s) of damage!" << std::endl;
		else
			std::cout << _Name << " recieved no damage." << std::endl;
		std::cout << _Name << " has " << _Hitpoints << " hitpoint(s) remaining." << std::endl;
		if (!_Hitpoints)
			std::cout << _Name << " was destroyed!!" << std::endl;
	}
	std::cout << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount) {
	std::cout << _Name << " was repaired and has restored " << amount << " hitpoint(s) and energy point(s)!" << std::endl;
	if (!_Hitpoints)
		std::cout << _Name << " is no longed destroyed!" << std::endl;
	_Hitpoints += amount;
	_Energy_points += amount;
	std::cout << _Name << " now has " << _Hitpoints << " hitpoint(s) and " << _Energy_points << " energy point(s)." << std::endl;
	std::cout << std::endl;
}

ClapTrap::ClapTrap(void) {
}