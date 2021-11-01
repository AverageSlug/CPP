#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice(void);
		~Ice(void);
		Ice(const Ice &cpy);
		Ice&	operator=(const Ice &a);
		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
};

#endif