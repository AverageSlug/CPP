#include "Fixed.hpp"

int main( void ) {
	{
		std::cout << "Subject Test Main" << std::endl;
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		std::cout << "My Test Main" << std::endl;
		Fixed c(3);
		Fixed const d(5.5f);
		std::cout << (c > d) << std::endl;
		std::cout << (c < d) << std::endl;
		std::cout << (c >= d) << std::endl;
		std::cout << (c <= d) << std::endl;
		std::cout << (c == d) << std::endl;
		std::cout << (c != d) << std::endl;
		std::cout << (c + d) << std::endl;
		std::cout << (c - d) << std::endl;
		std::cout << (c * d) << std::endl;
		std::cout << (c / d) << std::endl;
		std::cout << Fixed::min(c, d) << std::endl;
		std::cout << --c << std::endl;
		std::cout << c-- << std::endl;
		std::cout << c << std::endl;
	}
	return 0;
}