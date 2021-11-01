#include "Animal.hpp"

AAnimal::AAnimal(void) {
	_type = "undefined";
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &cpy) {
	*this = cpy;
}

AAnimal&	AAnimal::operator=(const AAnimal &a) {
	_type = a._type;
	return (*this);
}

void	AAnimal::makeSound() const {
	std::cout << "undefined" << std::endl;
}

std::string	AAnimal::getType() const {
	return (_type);
}