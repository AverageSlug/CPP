#include "span.hpp"

int main() {
	Span test(6);
	test.addNumber(0);
	test.addNumber(4);
	test.addNumber(80);
	test.addNumber(0);
	test.addNumber(17);
	test.addNumber(71);
	
	std::cout << "test shortest span: " << test.shortestSpan() << std::endl;
	std::cout << "test longest span: " << test.longestSpan() << std::endl;

	Span test2(10000);
	test2.addNumber(1, 10000);

	std::cout << "test2 shortest span: " <<  test2.shortestSpan() << std::endl;
	std::cout << "test2 longest span: " << test2.longestSpan() << std::endl;
}