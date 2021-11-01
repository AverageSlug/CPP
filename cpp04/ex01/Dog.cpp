#include "Dog.hpp"

Dog::Dog(void) {
	_type = "Dog";
	_smart = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog(void) {
	delete _smart;
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &cpy) {
	*this = cpy;
}

Dog&	Dog::operator=(const Dog &a) {
	_type = a._type;
	_smart = a._smart;
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "woof" << std::endl;
}