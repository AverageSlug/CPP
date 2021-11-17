#include "struct.hpp"

void	int_conv(t_conv *val) {
	if (val->s.length() > 6)
		val->fdc = true;
	try {
		val->i = std::stoi(val->s);
	}
	catch (std::out_of_range & o) {
		val->flag = 1;
		val->f = 0.0f;
		val->d = 0.0;
		return ;
	}
	if (val->i < 0 || val->i > 255)
		val->flag = 3;
	else if (val->i < 32 || val->i > 126)
		val->flag = 2;
	else
		val->c = static_cast<char>(val->i);
	val->f = static_cast<float>(val->i);
	val->d = static_cast<double>(val->i);
}

void	double_conv(t_conv *val) {
	if (val->s.length() > 6)
		val->fdc = true;
	try {
		val->d = std::stod(val->s);
	}
	catch (std::out_of_range & o) {
		val->f = 0.0f;
		val->flag = 5;
		return ;
	}
	if (val->d < 0 || val->d > 255)
		val->flag = 3;
	else if (val->d < 32 || val->d > 126)
		val->flag = 2;
	else
		val->c = static_cast<char>(val->d);
	val->i = static_cast<int>(val->d);
	if (val->d > INT_MAX || val->d < INT_MIN)
		val->flag = 1;
	val->f = static_cast<float>(val->d);
}

void	float_conv(t_conv *val) {
	if (val->s.length() > 6)
		val->fdc = true;
	try {
		val->f = std::stof(val->s);
	}
	catch (std::out_of_range & o) {
		val->d = 0.0;
		val->flag = 4;
		return ;
	}
	if (val->f < 0 || val->f > 255)
		val->flag = 3;
	else if (val->f < 32 || val->f > 126)
		val->flag = 2;
	else
		val->c = static_cast<char>(val->f);
	val->i = static_cast<int>(val->f);
	if (val->f > INT_MAX || val->f < INT_MIN)
		val->flag = 1;
	val->d = static_cast<double>(val->f);
}

void	char_conv(t_conv *val) {
	val->c = val->s[0];
	val->i = static_cast<int>(val->c);
	val->f = static_cast<float>(val->c);
	val->d = static_cast<double>(val->c);
}

void	sp_conv(t_conv *val) {
	val->d = std::stod(val->s);
	val->f = static_cast<float>(val->d);
	val->flag = 1;
}

void	fsp_conv(t_conv *val) {
	val->f = std::stof(val->s);
	val->d = static_cast<double>(val->f);
	val->flag = 1;
}