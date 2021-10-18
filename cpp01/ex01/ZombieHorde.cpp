#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie	*zombie = new Zombie[N];
	while (N > 0)
		zombie[--N].give_name(name);
	return (zombie);
}