#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	{
		FragTrap CoolTrap = FragTrap("CoolTrap");
		CoolTrap.attack("Guy");
		CoolTrap.takeDamage(50);
		CoolTrap.beRepaired(20);
		CoolTrap.takeDamage(30);
		CoolTrap.attack("Guy");
		CoolTrap.takeDamage(70);
		CoolTrap.beRepaired(80);
		CoolTrap.takeDamage(0);
		CoolTrap.highFivesGuys();
	}
}