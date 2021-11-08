#include "ClapTrap.hpp"

int	main(void) {
	{
		ClapTrap NoobTrap = ClapTrap("NoobTrap");
		NoobTrap.attack("Bob");
		NoobTrap.attack("Bob");
		NoobTrap.beRepaired(10);
		NoobTrap.attack("Bob");
		NoobTrap.takeDamage(10);
		NoobTrap.takeDamage(10);
		NoobTrap.takeDamage(0);
		NoobTrap.beRepaired(10);
		NoobTrap.takeDamage(5);
	}
}