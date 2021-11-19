#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <iostream>
# include <iterator>

template<typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack &cpy);
		MutantStack operator=(const MutantStack &a);
		class iterator : public std::iterator<std::input_iterator_tag, int> {};
		MutantStack<T>::iterator	begin();
		MutantStack<T>::iterator	end();
};

#endif