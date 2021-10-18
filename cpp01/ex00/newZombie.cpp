#include "Zombie.hpp"

Zombie*	newZombie(std::string name) {
	Zombie *zombie = new Zombie;
	zombie->give_name(name);
	return (zombie);
}