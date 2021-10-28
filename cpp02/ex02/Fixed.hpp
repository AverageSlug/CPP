#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &cpy);
		Fixed(const int n);
		Fixed(const float f);
		Fixed&			operator=(const Fixed &b);
		bool			operator>(const Fixed &b) const;
		bool			operator<(const Fixed &b) const;
		bool			operator>=(const Fixed &b) const;
		bool			operator<=(const Fixed &b) const;
		bool			operator==(const Fixed &b) const;
		bool			operator!=(const Fixed &b) const;
		Fixed&			operator+(const Fixed &b);
		Fixed&			operator-(const Fixed &b);
		Fixed&			operator*(const Fixed &b);
		Fixed&			operator/(const Fixed &b);
		Fixed&			operator++(int);
		Fixed&			operator--(int);
		Fixed			operator++();
		Fixed			operator--();
		static Fixed&	min(Fixed &a, Fixed &b);
		static Fixed&	max(Fixed &a, Fixed &b);
		const static Fixed&	min(const Fixed &a, const Fixed &b);
		const static Fixed&	max(const Fixed &a, const Fixed &b);
		int				getRawBits(void) const;
		void			setRawBits(int const raw);
		float			toFloat(void) const;
		int				toInt(void) const;
	private:
		int					_fpv;
		static const int	_fbits = 8;
};

std::ostream&	operator<<(std::ostream &o, Fixed const &i);

#endif