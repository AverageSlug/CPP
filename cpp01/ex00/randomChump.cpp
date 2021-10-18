#include "Zombie.hpp"

void	randomChump(std::string name) {
	Zombie zombie;
	zombie.give_name(name);
	zombie.annouce();
}