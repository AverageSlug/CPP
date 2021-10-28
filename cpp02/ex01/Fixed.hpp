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
		Fixed&	operator=(const Fixed &b);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		int					_fpv;
		static const int	_fbits = 8;
};

std::ostream&	operator<<(std::ostream &o, Fixed const &i);

#endif