#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		virtual	~Cat(void);
		Cat(const Cat &cpy);
		Cat&	operator=(const Cat &a);
		virtual void	makeSound() const;
};

#endif