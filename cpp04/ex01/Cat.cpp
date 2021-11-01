#include "Cat.hpp"

Cat::Cat(void) {
	_type = "Cat";
	_smart = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat(void) {
	delete _smart;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &cpy) {
	*this = cpy;
}

Cat&	Cat::operator=(const Cat &a) {
	_type = a._type;
	_smart = a._smart;
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "meow" << std::endl;
}