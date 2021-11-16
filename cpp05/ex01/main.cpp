#include "Bureaucrat.hpp"

int main() {
	try {
		Form test1("badform", 1000, -1000);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form test2("Good Form", 100, 50);
		std::cout << test2 << std::endl;
		Bureaucrat test2b("Bob", 101);
		std::cout << test2b << std::endl;
		test2b.signForm(test2);
		test2b.incGrade();
		std::cout << test2b << std::endl;
		test2b.signForm(test2);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}