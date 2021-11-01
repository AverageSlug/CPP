#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource(void);
		virtual ~MateriaSource(void);
		MateriaSource(const MateriaSource &cpy);
		MateriaSource&	operator=(const MateriaSource &a);
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const &type);
	private:
		AMateria *_inventory[4];
};

#endif