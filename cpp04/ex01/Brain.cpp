#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &cpy) {
	*this = cpy;
}

Brain&	Brain::operator=(const Brain &a) {
	int	i = -1;
	while (++i < 100)
		_ideas[i] = a._ideas[i];
	return (*this);
}