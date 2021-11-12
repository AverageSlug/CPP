#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &cpy);
		Cat&	operator=(const Cat &a);
		void	makeSound() const;
};

#endif