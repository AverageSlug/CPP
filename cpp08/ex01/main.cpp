#include "span.hpp"

int main() {
	Span test(6);
	test.addNumber(2);
	test.addNumber(4);
	test.addNumber(5);
	test.addNumber(0);
	test.addNumber(3);
	test.addNumber(1);

//	test.addNumber(1);

	std::cout << test.shortestSpan() << std::endl;
	std::cout << test.longestSpan() << std::endl;
}