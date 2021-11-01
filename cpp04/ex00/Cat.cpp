#include "Cat.hpp"

Cat::Cat(void) {
	_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &cpy) {
	*this = cpy;
}

Cat&	Cat::operator=(const Cat &a) {
	_type = a._type;
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "meow" << std::endl;
}