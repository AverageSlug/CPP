#include <iostream>
#include <string>

int main(int argc, char **argv) {
	if (argc != 2)
		return (1);
	std::string s = argv[1];
	char	c;
	int		i;
	float	f;
	double	d;

	int		n = -1;

	std::cout << s << std::endl;
	try {
		if (!s.compare("nan") || !s.compare("nanf") || !s.compare("+inf") || !s.compare("+inff") || !s.compare("-inf") || !s.compare("-inff")) {
			n = 0;
		}
		else if (s.length() == 1 && (s[0] < 48 || s[0] > 57)) {
			c = static_cast<char>(s[0]);
			n = 1;
		}
		else if (s.rfind("f") != s.npos) {
			f = std::stof(s);
			n = 2;
		}
		else if (s.find(".") != s.npos) {
			d = std::stod(s);
			n = 3;
		}
		else {
			i = std::stoi(s);
			n = 4;
		}
	}
	catch (std::exception & err) {
		std::cout << "Error: " << err.what() << std::endl;
		return (1);
	}
	try {
		switch (n) {
		case 0:
			
			break;
		case 1:
			i = static_cast<int>(c);
			f = static_cast<float>(c);
			d = static_cast<double>(c);
			break;
		case 2:
			c = static_cast<char>(f);
			i = static_cast<int>(f);
			d = static_cast<double>(f);
			break;
		case 3:
			c = static_cast<char>(d);
			i = static_cast<int>(d);
			f = static_cast<float>(d);
			break;
		case 4:
			c = static_cast<char>(i);
			f = static_cast<float>(i);
			d = static_cast<double>(i);
			break;
		default:
			std::cout << "Error: ???" << std::endl;
			break;
		}
	}
	catch (std::exception & err) {
		std::cout << "Error: " << err.what() << std::endl;
		return (1);
	}
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}