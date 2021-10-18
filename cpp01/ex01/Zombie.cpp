#include "Zombie.hpp"

Zombie::Zombie(void) {
}

Zombie::~Zombie(void) {
	std::cout << "Zombie with name " << _name << " was destroyed" << std::endl;
}

void	Zombie::annouce(void) {
	std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::give_name(std::string name) {
	_name = name;
}