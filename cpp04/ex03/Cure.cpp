#include "Cure.hpp"

Cure::Cure(void) : AMateria::AMateria("cure") {
}

Cure::~Cure(void) {
}

Cure::Cure(const Cure &cpy) : AMateria::AMateria(cpy._type) {
	*this = cpy;
}

Cure&	Cure::operator=(const Cure &a) {
	(void)a;
	return (*this);
}

Cure	*Cure::clone() const {
	Cure *m = new Cure();
	return (m);
}

void		Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}