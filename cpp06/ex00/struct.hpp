#ifndef STRUCT_HPP
# define STRUCT_HPP
# include <iostream>
# include <string>

typedef struct	s_conv {
	std::string		s;
	unsigned char	c;
	int		i;
	float	f;
	double	d;
	int		flag;
	bool	fdc;
}				t_conv;

void	fsp_conv(t_conv *val);
void	sp_conv(t_conv *val);
void	char_conv(t_conv *val);
void	float_conv(t_conv *val);
void	double_conv(t_conv *val);
void	int_conv(t_conv *val);

#endif