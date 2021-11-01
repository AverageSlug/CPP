#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {
	public:
		Dog(void);
		virtual	~Dog(void);
		Dog(const Dog &cpy);
		Dog&	operator=(const Dog &a);
		virtual void	makeSound() const;
	private:
		Brain	*_smart;
};

#endif