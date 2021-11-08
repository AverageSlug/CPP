#include "Dog.hpp"
#include "Cat.hpp"

int	main(void) {
	const	Animal	*a[100];
	int		i = 0;
	while (i < 50)
		a[i++] = new Dog();
	while (i < 100)
		a[i++] = new Cat();
	i = 0;
	while (i < 100)
		delete a[i++];
}