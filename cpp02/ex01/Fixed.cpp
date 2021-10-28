#include "Fixed.hpp"

Fixed::Fixed(void) {
	_fpv = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cpy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed::Fixed(const int n) {
	_fpv = n * (1 << _fbits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) {
	_fpv = roundf(f * (1 << _fbits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed &b) {
	std::cout << "Assignation operator called" << std::endl;
	_fpv = b.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const {
	return (_fpv);
}

void	Fixed::setRawBits(int const raw) {
	_fpv = raw;
}

float	Fixed::toFloat(void) const {
	return ((float)_fpv / (float)(1 << _fbits));
}

int		Fixed::toInt(void) const {
	return ((int)_fpv / (int)(1 << _fbits));
}

std::ostream&	operator<<(std::ostream &o, Fixed const &i) {
	o << i.toFloat();
	return (o);
}