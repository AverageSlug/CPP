#include "Ice.hpp"

Ice::Ice(void) : AMateria::AMateria("ice") {
}

Ice::~Ice(void) {
}

Ice::Ice(const Ice &cpy) : AMateria::AMateria(cpy._type) {
	*this = cpy;
}

Ice&	Ice::operator=(const Ice &a) {
	(void)a;
	return (*this);
}

Ice		*Ice::clone() const {
	Ice *m = new Ice(*this);
	return (m);
}

void		Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}