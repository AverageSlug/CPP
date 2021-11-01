#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	_type = "undefined";
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy) {
	*this = cpy;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &a) {
	_type = a._type;
	return (*this);
}

void	WrongAnimal::makeSound() const {
	std::cout << "wrong undefined" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return (_type);
}