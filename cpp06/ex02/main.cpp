#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <random>
#include <chrono>

Base *generate() {
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  	std::default_random_engine generator (seed);
	std::uniform_int_distribution<int> distribution(1,3);
	int r = distribution(generator);
	switch (r) {
		case 1:
		return (new A());
		case 2:
		return (new B());
		case 3:
		return (new C());
		default:
		return (NULL);
	}
}

void	identify(Base *p) {
	A *a;
	B *b;
	C *c;
	a = dynamic_cast<A*>(p);
	if (a != NULL)
		std::cout << "A" << std::endl;
	b = dynamic_cast<B*>(p);
	if (b != NULL)
		std::cout << "B" << std::endl;
	c = dynamic_cast<C*>(p);
	if (c != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base &p) {
	try {
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
		(void)a;
	}
	catch (std::bad_cast) {}
	try {
		B &b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
		(void)b;
	}
	catch (std::bad_cast) {}
	try {
		C &c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
		(void)c;
	}
	catch (std::bad_cast) {}
}

int main() {
	Base *rand = generate();
	identify(rand);
	identify(*rand);
}