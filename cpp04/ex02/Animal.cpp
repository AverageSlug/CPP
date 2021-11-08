#include "Animal.hpp"

Animal::Animal(void) {
	_type = "undefined";
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &cpy) {
	*this = cpy;
}

Animal&	Animal::operator=(const Animal &a) {
	_type = a._type;
	return (*this);
}

void	Animal::makeSound() const {
	std::cout << "undefined" << std::endl;
}

std::string	Animal::getType() const {
	return (_type);
}