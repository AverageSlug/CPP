#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {
	public:
		Zombie(void);
		~Zombie(void);
		void	annouce(void);
		void	give_name(std::string name);

	private:
		std::string	_name;
};

Zombie* zombieHorde(int N, std::string name);

#endif