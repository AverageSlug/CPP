#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void) {
	std::cout << std::endl << "Right" << std::endl << std::endl;
	const Animal* a = new Animal();
	const Animal* d = new Dog();
	const Animal* c = new Cat();
	std::cout << d->getType() << std::endl;
	std::cout << c->getType()  << std::endl;
	a->makeSound();
	d->makeSound();
	c->makeSound();
	delete a;
	delete d;
	delete c;
	std::cout << std::endl << "Wrong" << std::endl << std::endl;
	const WrongAnimal* wa = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();
	std::cout << wc->getType()  << std::endl;
	wa->makeSound();
	wc->makeSound();
	delete wa;
	delete wc;
}