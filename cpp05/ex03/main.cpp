#include "Intern.hpp"

int main() {
	Form	*test1;
	Form	*test2;
	Form	*test3;
	Bureaucrat testb("God", 1);
	Intern	testi;
	test1 = testi.makeForm("deez", "nuts");
	test1 = testi.makeForm("shrubbery creation", "meh");
	test2 = testi.makeForm("robotomy request", "John");
	test3 = testi.makeForm("presidential pardon", "Bob");
	std::cout << *test1 << std::endl;
	std::cout << *test2 << std::endl;
	std::cout << *test3 << std::endl;
	std::cout << testb << std::endl;
	testb.signForm(*test1);
	testb.signForm(*test2);
	testb.signForm(*test3);
	testb.executeForm(*test1);
	testb.executeForm(*test2);
	testb.executeForm(*test3);
}