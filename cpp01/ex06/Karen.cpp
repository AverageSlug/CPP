#include "Karen.hpp"

Karen::Karen(void) {
	kraken[0].level = "DEBUG";
	kraken[0].c = &Karen::_debug;
	kraken[1].level = "INFO";
	kraken[1].c = &Karen::_info;
	kraken[2].level = "WARNING";
	kraken[2].c = &Karen::_warning;
	kraken[3].level = "ERROR";
	kraken[3].c = &Karen::_error;
}

Karen::~Karen(void) {
}

void	Karen::complain(std::string level) {
	Karen	dn;
	int		i;

	for (i = 0; i < 4; i++) {
		if (level == kraken[i].level)
			break ;
	}
	switch (i) {
	case 0:
		std::cout << "[DEBUG]" << std::endl;
		(dn.*kraken[0].c)();
	case 1:
		std::cout << "[INFO]" << std::endl;
		(dn.*kraken[1].c)();
	case 2:
		std::cout << "[WARNING]" << std::endl;
		(dn.*kraken[2].c)();
	case 3:
		std::cout << "[ERROR]" << std::endl;
		(dn.*kraken[3].c)();
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break ;
	}
}

void	Karen::_debug(void) {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void	Karen::_info(void) {
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void	Karen::_warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void	Karen::_error(void) {
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}