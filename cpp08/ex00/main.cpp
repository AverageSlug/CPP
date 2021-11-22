#include "easyfind.hpp"
#include <list>

int main() {
	std::list<int>	cont;
	cont.push_back(1);
	cont.push_back(2);
	cont.push_back(3);
	try {
		easyfind(cont, 1);
		std::cout << "1 Found" << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << "1 Not Found" << std::endl;
	}
	try {
		easyfind(cont, 2);
		std::cout << "2 Found" << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << "2 Not Found" << std::endl;
	}
	try {
		easyfind(cont, 3);
		std::cout << "3 Found" << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << "3 Not Found" << std::endl;
	}
	try {
		easyfind(cont, 69420);
		std::cout << "69420 Found" << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << "69420 Not Found" << std::endl;
	}
}