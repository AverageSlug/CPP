#include "ScavTrap.hpp"

int	main(void) {
	{
		ClapTrap NoobTrap = ClapTrap("NoobTrap");
		NoobTrap.attack("Bob");
		NoobTrap.takeDamage(50);
		NoobTrap.beRepaired(20);
		NoobTrap.takeDamage(30);
		NoobTrap.attack("Bob");
		NoobTrap.takeDamage(70);
		NoobTrap.beRepaired(80);
		NoobTrap.takeDamage(0);
	}
	{
		ScavTrap ProTrap = ScavTrap("ProTrap");
		ProTrap.attack("Joe");
		ProTrap.takeDamage(20);
		ProTrap.beRepaired(50);
		ProTrap.takeDamage(2000);
		ProTrap.beRepaired(10);
		ProTrap.guardGate();
		ProTrap.attack("Joe");
		ProTrap.takeDamage(4);
		ProTrap.attack("Joe");
		ProTrap.takeDamage(3);
		ProTrap.guardGate();
		ProTrap.attack("Joe");
		ProTrap.attack("Joe");
		ProTrap.attack("Joe");
		ProTrap.attack("Joe");
		ProTrap.attack("Joe");
		ProTrap.attack("Joe");
		ProTrap.attack("Joe");
		ProTrap.attack("Joe");
		ProTrap.beRepaired(2);
		ProTrap.attack("Joe");
	}
}