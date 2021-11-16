#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	try {
		ShrubberyCreationForm test1("Scrub");
		Bureaucrat test1b1("Steve", 150);
		Bureaucrat test1b2("idk", 100);
		std::cout << test1 << std::endl;
		std::cout << test1b1 << std::endl;
		std::cout << test1b2 << std::endl;
		test1b1.executeForm(test1);
		test1b2.executeForm(test1);
		test1b2.signForm(test1);
		test1b2.executeForm(test1);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		RobotomyRequestForm test2("wow");
		Bureaucrat test2b1("Joe", 69);
		Bureaucrat test2b2("bot", 42);
		std::cout << test2 << std::endl;
		std::cout << test2b1 << std::endl;
		std::cout << test2b2 << std::endl;
		test2b1.executeForm(test2);
		test2b1.signForm(test2);
		test2b1.executeForm(test2);
		test2b2.executeForm(test2);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		PresidentialPardonForm test3("haha");
		Bureaucrat test3b("CEO", 1);
		std::cout << test3 << std::endl;
		std::cout << test3b << std::endl;
		test3b.signForm(test3);
		test3b.executeForm(test3);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}