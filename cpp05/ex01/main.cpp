#include "Bureaucrat.hpp"

int main() {
	Bureaucrat test0("Peter", 1);
	Bureaucrat test1("Jessica", 69);
	Bureaucrat test2("Samuel", 80);
	Bureaucrat test3("Kelly", 120);
	Form form0("RandomForm", 120, 110);
	Form form1("SlightlyImportantForm", 79, 50);
	Form form2("Form420", 42, 19);
	Form form3("CEO Form", 2, 1);
	std::cout << test0 << std::endl;
	std::cout << test1 << std::endl;
	std::cout << test2 << std::endl;
	std::cout << test3 << std::endl;
	std::cout << form0 << std::endl;
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	std::cout << form3 << std::endl;
	std::cout << form0.getSignature() << std::endl;
	std::cout << form1.getSignature() << std::endl;
	std::cout << form2.getSignature() << std::endl;
	std::cout << form3.getSignature() << std::endl;
	form0.beSigned(test3);
	form1.beSigned(test2);
	form2.beSigned(test1);
	form3.beSigned(test0);
	std::cout << form0.getSignature() << std::endl;
	std::cout << form1.getSignature() << std::endl;
	std::cout << form2.getSignature() << std::endl;
	std::cout << form3.getSignature() << std::endl;
	test2.incGrade(1);
	test1.incGrade(20);
	form1.beSigned(test2);
	form2.beSigned(test1);
	std::cout << form1.getSignature() << std::endl;
	std::cout << form2.getSignature() << std::endl;
}