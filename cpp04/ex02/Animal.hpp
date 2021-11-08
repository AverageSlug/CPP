#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal {
	public:
		Animal(void);
		virtual	~Animal(void);
		Animal(const Animal &cpy);
		Animal&	operator=(const Animal &a);
		virtual void		makeSound() const = 0;
		std::string	getType() const;
	protected:
		std::string	_type;
};

#endif