#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	_type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy) {
	*this = cpy;
}

WrongCat&	WrongCat::operator=(const WrongCat &a) {
	_type = a._type;
	return (*this);
}

void	WrongCat::makeSound() const {
	std::cout << "wrong meow" << std::endl;
}