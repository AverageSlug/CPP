#include "Character.hpp"

Character::Character(std::string const &name) : _name(name) {
	int i = -1;
	while (++i < 4)
		_num_materia[i] = false;
}

Character::~Character(void) {
	int	i = -1;
	while (++i < 4)
		if (_num_materia[i])
			delete _inventory[i];
}

Character::Character(const Character &cpy) {
	*this = cpy;
}

Character&	Character::operator=(const Character &a) {
	int	i = -1;
	while (++i < 4) {
		_inventory[i] = a._inventory[i];
		_num_materia[i] = a._num_materia[i];
	}
	_name = a.getName();
	return (*this);
}

std::string const &Character::getName() const {
	return (_name);
}

void Character::equip(AMateria *m) {
	int i = -1;
	while (m && ++i < 4)
		if (!_num_materia[i]) {
			_inventory[i] = m->clone();
			_num_materia[i] = true;
			break;
		}
}

void Character::unequip(int idx) {
	_num_materia[idx] = false;
}

void Character::use(int idx, ICharacter& target) {
	if (_num_materia[idx]) {
		_inventory[idx]->use(target);
		_num_materia[idx] = false;
		delete _inventory[idx];
	}
}

Character::Character(void) {
}