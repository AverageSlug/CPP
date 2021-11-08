#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _num_materia(0) {
}

MateriaSource::~MateriaSource(void) {
	int	i = 0;
	while (i < _num_materia)
		delete _inventory[i++];
}

MateriaSource::MateriaSource(const MateriaSource &cpy) {
	*this = cpy;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource &a) {
	int	i = -1;
	while (++i < 4)
		_inventory[i] = a._inventory[i];
	_num_materia = a._num_materia;
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m) {
	if (_num_materia < 4)
		_inventory[_num_materia++] = m->clone();
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	int i = -1;
	while(++i < _num_materia)
		if (!_inventory[i]->getType().compare(type))
			return(_inventory[i]->clone());
	return (0);
}