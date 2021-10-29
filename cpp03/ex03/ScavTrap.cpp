#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap Constructor Called" << std::endl;
	_Gate = false;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) {
	*this = cpy;
}

ScavTrap::ScavTrap(void) {
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &a) {
	_Name = a._Name;
	_Hitpoints = a._Hitpoints;
	_Energy_points = a._Energy_points;
	_Attack_damage = a._Attack_damage;
	return (*this);
}

void		ScavTrap::attack(std::string const &target) {
	if (_Energy_points - 10 - _Gate < 0)
	{
		std::cout << _Name << " doesn't have enough energy points left to fight!" << std::endl;
		std::cout << std::endl;
		return ;
	}
	std::cout << _Name << " used " << 10 + _Gate << " energy points to get into a fight with " << target << "!" << std::endl;
	if (!_Gate)
	{
		if (_Attack_damage)
			std::cout << target << " was beaten and was dealt " << _Attack_damage << " point(s) of damage!" << std::endl;
		else
			std::cout << target << " fought back hard and was dealt no damage." << std::endl;
	}
	else
		std::cout << target << " was beaten to a pulp by an increased " << _Attack_damage + 5 << " point(s) of damage!" << std::endl;
	_Energy_points -= 10 + _Gate;
	if (_Energy_points < 0)
		_Energy_points = 0;
	std::cout << _Name << " has " << _Energy_points << " energy point(s) remaining." << std::endl;
	std::cout << std::endl;
}

void		ScavTrap::guardGate(void) {
	if (!_Gate)
	{
		_Gate = true;
		std::cout << _Name << " is now is Gatekeeper mode!" << std::endl;
		std::cout << _Name << " will now deal a bonus 5 damage on attacks in exchange for 1 energy point." << std::endl;
	}
	else
	{
		_Gate = false;
		std::cout << _Name << " is no longer in Gatekeeper mode!" << std::endl;
	}
	std::cout << std::endl;
}