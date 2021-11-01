#include "Dog.hpp"

Dog::Dog(void) {
	_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &cpy) {
	*this = cpy;
}

Dog&	Dog::operator=(const Dog &a) {
	_type = a._type;
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "woof" << std::endl;
}