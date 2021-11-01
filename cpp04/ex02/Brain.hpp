#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain {
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain &cpy);
		Brain&	operator=(const Brain &a);
	private:
		std::string	_ideas[100];
};

#endif