#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
}

MateriaSource::~MateriaSource(void) {
}

MateriaSource::MateriaSource(const MateriaSource &cpy) {
	*this = cpy;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource &a) {
	int	i = -1;
	while (++i < 4)
		_inventory[i] = a._inventory[i];
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m) {
	int	i = -1;
	while (++i < 4)
		if (!_inventory[i]) {
			_inventory[i] =	m->clone();
			break ;
		}
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	int i = -1;
	while (++i < 4)
	{
		std::cout << _inventory[i]->getType() << std::endl;
		if (_inventory[i] && _inventory[i]->getType().compare(type))
			return (_inventory[i]->clone());
	}
	return (0);
}