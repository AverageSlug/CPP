#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal {
	public:
		WrongAnimal(void);
		~WrongAnimal(void);
		WrongAnimal(const WrongAnimal &cpy);
		WrongAnimal&	operator=(const WrongAnimal &a);
		void		makeSound() const;
		std::string	getType() const;
	protected:
		std::string	_type;
};

#endif