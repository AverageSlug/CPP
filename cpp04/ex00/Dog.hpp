#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &cpy);
		Dog&	operator=(const Dog &a);
		void	makeSound() const;
};

#endif