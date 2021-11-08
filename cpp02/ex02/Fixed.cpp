#include "Fixed.hpp"

Fixed::Fixed(void) : _fpv(0) {
}

Fixed::~Fixed(void) {
}

Fixed::Fixed(const Fixed &cpy) {
	*this = cpy;
}

Fixed::Fixed(const int n) {
	_fpv = n * (1 << _fbits);
}

Fixed::Fixed(const float f) {
	_fpv = roundf(f * (1 << _fbits));
}

Fixed&	Fixed::operator=(const Fixed &b) {
	_fpv = b.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed &b) const {
	if (_fpv > b.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &b) const {
	if (_fpv < b.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &b) const {
	if (_fpv >= b.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &b) const {
	if (_fpv <= b.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &b) const {
	if (_fpv == b.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &b) const {
	if (_fpv != b.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed &b) {
	Fixed tmp;
	tmp._fpv = _fpv + b.getRawBits();
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed &b) {
	Fixed tmp;
	tmp._fpv = _fpv - b.getRawBits();
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed &b) {
	Fixed tmp;
	tmp._fpv = _fpv * b.toFloat();
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed &b) {
	Fixed tmp;
	tmp._fpv = _fpv / b.toFloat();
	return (tmp);
}

Fixed	Fixed::operator++() {
	_fpv++;
	return (*this);
}

Fixed	Fixed::operator--() {
	_fpv--;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed temp = *this;
	_fpv++;
	return (temp);
}

Fixed	Fixed::operator--(int) {
	Fixed temp = *this;
	_fpv--;
	return (temp);
}

Fixed&	Fixed::min(Fixed &a, Fixed &b) {
	if (a <= b)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b) {
	if (a >= b)
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b) {
	if (a <= b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b) {
	if (a >= b)
		return (a);
	return (b);
}

int		Fixed::getRawBits(void) const {
	return (_fpv);
}

void	Fixed::setRawBits(int const raw) {
	_fpv = raw;
}

float	Fixed::toFloat(void) const {
	return ((float)_fpv / (1 << _fbits));
}

int		Fixed::toInt(void) const {
	return (_fpv / (1 << _fbits));
}

std::ostream&	operator<<(std::ostream &o, Fixed const &i) {
	o << i.toFloat();
	return (o);
}