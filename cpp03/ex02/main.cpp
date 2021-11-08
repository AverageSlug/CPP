#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	{
		ClapTrap NoobTrap = ClapTrap("NoobTrap");
		NoobTrap.attack("Bob");
		NoobTrap.attack("Bob");
		NoobTrap.attack("Bob");
		NoobTrap.attack("Bob");
		NoobTrap.attack("Bob");
		NoobTrap.attack("Bob");
		NoobTrap.beRepaired(10);
		NoobTrap.attack("Bob");
		NoobTrap.takeDamage(60);
		NoobTrap.takeDamage(60);
		NoobTrap.takeDamage(0);
		NoobTrap.beRepaired(100);
		NoobTrap.takeDamage(50);
	}
	{
		ScavTrap ProTrap = ScavTrap("ProTrap");
		ProTrap.attack("Joe");
		ProTrap.attack("Joe");
		ProTrap.attack("Joe");
		ProTrap.attack("Joe");
		ProTrap.attack("Joe");
		ProTrap.attack("Joe");
		ProTrap.beRepaired(10);
		ProTrap.attack("Joe");
		ProTrap.takeDamage(60);
		ProTrap.takeDamage(60);
		ProTrap.takeDamage(0);
		ProTrap.beRepaired(100);
		ProTrap.takeDamage(50);
		ProTrap.guardGate();
		ProTrap.attack("Joe");
		ProTrap.guardGate();
	}
	{
		FragTrap CoolTrap = FragTrap("NoobTrap");
		CoolTrap.attack("NotCool");
		CoolTrap.attack("NotCool");
		CoolTrap.attack("NotCool");
		CoolTrap.attack("NotCool");
		CoolTrap.attack("NotCool");
		CoolTrap.attack("NotCool");
		CoolTrap.attack("NotCool");
		CoolTrap.attack("NotCool");
		CoolTrap.attack("NotCool");
		CoolTrap.attack("NotCool");
		CoolTrap.highFivesGuys();
		CoolTrap.beRepaired(10);
		CoolTrap.attack("NotCool");
		CoolTrap.takeDamage(60);
		CoolTrap.takeDamage(60);
		CoolTrap.takeDamage(0);
		CoolTrap.beRepaired(100);
		CoolTrap.takeDamage(50);
		CoolTrap.highFivesGuys();
	}
}