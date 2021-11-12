#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
	_smart = new Brain();
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
	delete _smart;
}

Dog::Dog(const Dog &cpy) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cpy;
}

Dog&	Dog::operator=(const Dog &a) {
	_type = a._type;
	*_smart = *a._smart;
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "woof" << std::endl;
}