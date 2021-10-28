#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &cpy);
		Fixed&	operator=(const Fixed &b);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					_fpv;
		static const int	_fbits = 8;
};

#endif