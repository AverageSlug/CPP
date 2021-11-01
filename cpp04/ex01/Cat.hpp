#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		virtual	~Cat(void);
		Cat(const Cat &cpy);
		Cat&	operator=(const Cat &a);
		virtual void	makeSound() const;
	private:
		Brain	*_smart;
};

#endif