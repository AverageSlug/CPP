#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <deque>
# include <iostream>
# include <iterator>

template<typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack<T> &cpy);
		MutantStack<T> &operator=(const MutantStack<T> &a);
		typedef typename std::stack<T>::container_type::iterator	iterator;
		#define cont c
		iterator	begin();
		iterator	end();
};

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &cpy) : std::stack<T>(cpy) {}

template<typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &a) {
	this->c = a.c;
	return (*this);
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin() {
	return (this->cont.begin());
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end() {
	return (this->cont.end());
}

#endif