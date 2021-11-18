#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T>
void	iter(T *x, int length, void (*f)(T const &)) {
	if (!x || !f)
		return ;
	for (int i = 0; i < length; i++) {
		f(x[i]);
	}
}

#endif