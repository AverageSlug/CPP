#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
	_smart = new Brain;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
	delete _smart;
}

Cat::Cat(const Cat &cpy) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cpy;
}

Cat&	Cat::operator=(const Cat &a) {
	_type = a._type;
	*_smart = *a._smart;
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "meow" << std::endl;
}