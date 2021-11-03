#include "Bureaucrat.hpp"

int main() {
	Bureaucrat test0("Peter", 1);
	Bureaucrat test1("Jessica", 69);
	Bureaucrat test2("Samuel", 80);
	Bureaucrat test3("Kelly", 120);
	test1.incGrade(1);
	test2.decGrade(1);
	std::cout << test0 << std::endl;
	std::cout << test1 << std::endl;
	std::cout << test2 << std::endl;
	std::cout << test3 << std::endl;
}