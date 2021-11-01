#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) {
	_type = type;
}

AMateria::~AMateria(void) {
}

AMateria::AMateria(const AMateria &cpy) {
	*this = cpy;
}

AMateria&	AMateria::operator=(const AMateria &a) {
	(void)a;
	return (*this);
}

std::string const	&AMateria::getType() const {
	return (_type);
}

AMateria	*AMateria::clone() const {
	return (0);
}

void		AMateria::use(ICharacter &target) {
	(void)target;
}