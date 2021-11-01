#include "Character.hpp"

Character::Character(std::string const &name) {
	_name = name;
}

Character::~Character(void) {
	int	i = 0;
	while (i < 4 && _inventory[i])
		delete _inventory[i++];
}

Character::Character(const Character &cpy) {
	*this = cpy;
}

Character&	Character::operator=(const Character &a) {
	int	i = -1;
	while (++i < 4)
		_inventory[i] = a._inventory[i];
	_name = a.getName();
	return (*this);
}

std::string const &Character::getName() const {
	return (_name);
}

void Character::equip(AMateria *m) {
	int	i = -1;
	while (++i < 4)
		if (!_inventory[i])
			_inventory[i] = m;
}

void Character::unequip(int idx) {
	if (idx < 4 && _inventory[idx])
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (_inventory[idx]) {
		_inventory[idx]->use(target);
		delete _inventory[idx];
	}
}

Character::Character(void) {
}