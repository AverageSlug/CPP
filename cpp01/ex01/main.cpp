#include "Zombie.hpp"

int	main(void) {
	int	N = 5;
	Zombie *zombie;
	zombie = zombieHorde(N, "Zombozo");
	while (N > 0)
		zombie[--N].annouce();
	delete[] zombie;
}