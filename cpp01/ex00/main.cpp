#include "Zombie.hpp"

int main(void) {
	Zombie *zombie;
	zombie = newZombie("Bob");
	zombie->annouce();
	delete zombie;
	randomChump("Ed");
	randomChump("Edd");
	randomChump("Eddy");
	zombie = newZombie("Joe");
	zombie->annouce();
	delete zombie;
}