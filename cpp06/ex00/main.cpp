#include "struct.hpp"

int	check_str(std::string s) {
	bool f = false;
	for (unsigned int i = 0; i < s.length(); i++) {
		if ((s[i] != '-' && s[i] != '.' && s[i] != 'f' && (s[i] < 48 || s[i] > 57)) || (s[i] == '.' && (f || i == s.length() - 1 || s[i + 1] == 'f')) || (s[i] == 'f' && (i != s.length() - 1 || !f)) || (s[i] == '-' && i > 0))
			return (1);
		if (s[i] == '.')
			f = true;
	}
	return (0);
}

int	conv(t_conv *val) {
	if (!val->s.compare("-inff") || !val->s.compare("+inff") || !val->s.compare("nanf"))
		fsp_conv(val);
	else if (!val->s.compare("-inf") || !val->s.compare("+inf") || !val->s.compare("nan"))
		sp_conv(val);
	else if (val->s.length() > 1 && check_str(val->s)) {
		std::cout << "Invalid argument" << std::endl;
		return (1);
	}
	else if (val->s.length() == 1 && (val->s[0] < 48 || val->s[0] > 57))
		char_conv(val);
	else if (val->s.find(".") != val->s.npos && val->s.find("f") != val->s.npos)
		float_conv(val);
	else if (val->s.find(".") != val->s.npos)
		double_conv(val);
	else
		int_conv(val);
	return (0);
}

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}
	t_conv	val;
	val.s = argv[1];
	val.flag = 0;
	val.fdc = false;

	if (conv(&val))
		return (1);
	if (!val.flag)
		std::cout << "char: '" << val.c << "'" << std::endl;
	if (val.flag == 2)
		std::cout << "char: Non displayable" << std::endl;
	if (val.flag == 1 || val.flag > 2)
		std::cout << "char: impossible" << std::endl;
	if (!val.flag || val.flag == 2 || val.flag == 3)
		std::cout << "int: " << val.i << std::endl;
	if (val.flag == 1 || val.flag > 3)
		std::cout << "int: impossible" << std::endl;
	if (((val.f - (int)val.f != (float)0 || val.flag == 1 || val.fdc) && val.flag < 4) && !(val.flag == 1 && val.f == 0.0f))
		std::cout << "float: " << val.f << "f" << std::endl;
	else if (val.flag > 3)
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << val.f << ".0f" << std::endl;
	if (((val.d - (int)val.d != (double)0 || val.flag == 1 || val.fdc) && val.flag < 5) && !(val.flag == 1 && val.d == 0.0))
		std::cout << "double: " << val.d << std::endl;
	else if (val.flag > 4)
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << val.d << ".0" << std::endl;
	return (0);
}