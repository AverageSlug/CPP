#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class AAnimal {
	public:
		AAnimal(void);
		virtual	~AAnimal(void);
		AAnimal(const AAnimal &cpy);
		AAnimal&	operator=(const AAnimal &a);
		virtual void		makeSound() const = 0;
		std::string	getType() const;
	protected:
		std::string	_type;
};

#endif