#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
	public:
		AMateria(std::string const &type);
		virtual ~AMateria(void);
		AMateria(const AMateria &cpy);
		AMateria&	operator=(const AMateria &a);
		std::string const	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
	protected:
		std::string	_type;
	private:
		AMateria(void);
};

#endif