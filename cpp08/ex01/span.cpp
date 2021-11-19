#include "span.hpp"

Span::Span(void) : _N(0) {}

Span::Span(unsigned int N) : _N(N) {}

Span::~Span(void) {}

Span::Span(const Span &cpy) {
	*this = cpy;
}

Span&	Span::operator=(const Span &a) {
	_V.clear();
	_V = a._V;
	_N = a._N;
	return (*this);
}

void	Span::addNumber(int num) {
	if (_V.size() >= _N)
		throw std::exception();
	_V.push_back(num);
}

int		Span::shortestSpan() {
	if (_V.size() < 2)
		throw std::exception();
	int c_short = -1;
	for (std::vector<int>::iterator itr = _V.begin(); itr < _V.end(); itr++) {
		for (std::vector<int>::iterator itr2 = itr + 1; itr2 < _V.end(); itr2++) {
			if (abs(*itr - *itr2) < c_short || c_short < 0)
				c_short = abs(*itr - *itr2);
		}
	}
	return (c_short);
}

int		Span::longestSpan() {
	if (_V.size() < 2)
		throw std::exception();
	int c_long = -1;
	for (std::vector<int>::iterator itr = _V.begin(); itr < _V.end(); itr++) {
		for (std::vector<int>::iterator itr2 = itr + 1; itr2 < _V.end(); itr2++) {
			if (abs(*itr - *itr2) > c_long || c_long < 0)
				c_long = abs(*itr - *itr2);
		}
	}
	return (c_long);
}