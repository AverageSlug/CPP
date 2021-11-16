#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat test1("noob", 1000);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat test2("Guy", 150);
		std::cout << test2 << std::endl;
		test2.decGrade();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat test3("Type", 1);
		std::cout << test3 << std::endl;
		test3.incGrade();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}