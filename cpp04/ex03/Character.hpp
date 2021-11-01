#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character : public ICharacter {
	public:
		Character(std::string const &name);
		virtual ~Character(void);
		Character(const Character &cpy);
		Character&	operator=(const Character &a);
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter &target);
	private:
		AMateria *_inventory[4];
		std::string _name;
		Character(void);
};

#endif