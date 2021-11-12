#include "Dog.hpp"
#include "Cat.hpp"

int	main(void) {
	{
		std::cout << "Main Test" << std::endl;
		const Animal* d = new Dog();
		const Animal* c = new Cat();
		std::cout << d->getType() << std::endl;
		std::cout << c->getType()  << std::endl;
		d->makeSound();
		c->makeSound();
		delete d;
		delete c;
	}
	{
		std::cout << "Brain Test" << std::endl;
		Animal	*a[100];
		int		i = -1;
		while (++i < 100)
			a[i++] = new Dog();
		i = 0;
		while (++i < 100)
			a[i++] = new Cat();
		i = 0;
		while (i < 100)
			delete a[i++];
	}
	{
		std::cout << "Deep Copy Test" << std::endl;
		Cat *origin = new Cat();
		Cat *copy = new Cat();
		*copy = *origin;
		delete (origin);
		copy->makeSound();
		delete (copy);
	}
}