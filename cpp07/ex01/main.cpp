#include "iter.hpp"

template<typename T>
void	inc(T const & i) {
	std::cout << i << std::endl;
}

int main() {
	int i[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char c[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	iter(i, 10, inc);
	iter(c, 26, inc);
}