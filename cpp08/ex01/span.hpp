#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <iostream>

class Span {
	public:
		Span(void);
		Span(unsigned int N);
		~Span(void);
		Span(const Span &cpy);
		Span&	operator=(const Span &a);
		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();
	private:
		unsigned int _N;
		std::vector<int> _V;
};

#endif