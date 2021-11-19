#include "easyfind.hpp"
#include <list>

int main() {
	std::list<int>	cont;
	cont.push_back(1);
	cont.push_back(2);
	cont.push_back(3);
	try {
		easyfind(cont, 1);
		std::cout << "found 1" << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		easyfind(cont, 69420);
		std::cout << "found 69420" << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		easyfind(cont, 3);
		std::cout << "found 3" << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}