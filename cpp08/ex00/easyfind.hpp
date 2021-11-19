#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>

template<typename T>
void	easyfind(T cont, int i) {
	if (std::find(cont.begin(), cont.end(), i) == cont.end())
		throw std::exception();
}

#endif