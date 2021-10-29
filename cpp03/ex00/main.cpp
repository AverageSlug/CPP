#include "ClapTrap.hpp"

int	main(void) {
	{
		ClapTrap NoobTrap = ClapTrap("NoobTrap");
		NoobTrap.attack("Bob");
		NoobTrap.takeDamage(5);
		NoobTrap.beRepaired(2);
		NoobTrap.takeDamage(3);
		NoobTrap.attack("Bob");
		NoobTrap.takeDamage(7);
		NoobTrap.beRepaired(8);
		NoobTrap.takeDamage(0);
	}
}