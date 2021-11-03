#include "Zombie.hpp"

int	main(void) {
	int	N = 5;
	Zombie *zombie;
	zombie = zombieHorde(N, "RandomZombie");
	while (N > 0)
		zombie[--N].annouce();
	delete[] zombie;
}