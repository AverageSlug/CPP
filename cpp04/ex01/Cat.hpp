#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &cpy);
		Cat&	operator=(const Cat &a);
		void	makeSound() const;
	private:
		Brain	*_smart;
};

#endif