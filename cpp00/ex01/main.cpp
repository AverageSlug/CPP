#include "phonebook.hpp"

static void	print_loop(phonebook phonebook, int n)
{
	int	i, j;

	j = -1;
	i = n;
	if (n > 7)
		i = 8;
	while (++j < i)
	{
		std::cout << std::setw(10);
		std::cout << j << "|";
		std::cout << std::setw(10);
		if (phonebook.cdata[j].get_data(0).length() > 10)
			std::cout << phonebook.cdata[j].get_data(0).substr(0, 9) + "." << "|";
		else
			std::cout << phonebook.cdata[j].get_data(0) << "|";
		std::cout << std::setw(10);
		if (phonebook.cdata[j].get_data(1).length() > 10)
			std::cout << phonebook.cdata[j].get_data(1).substr(0, 9) + "." << "|";
		else
			std::cout << phonebook.cdata[j].get_data(1) << "|";
		std::cout << std::setw(10);
		if (phonebook.cdata[j].get_data(2).length() > 10)
			std::cout << phonebook.cdata[j].get_data(2).substr(0, 9) + "." << std::endl;
		else
			std::cout << phonebook.cdata[j].get_data(2) << std::endl;
	}
}

static int	is_digit(const char *str)
{
	int	i;

	i = 0;
	if (!str[i] || str[i] < 48 || str[i] > 57)
		return (1);
	if (str[++i])
		return (1);
	return (0);
}

static void	search_contact(phonebook phonebook, int n)
{
	int			i, j;
	std::string	k;

	if (n == 0)
	{
		std::cout << "There are no contacts." << std::endl;
		return ;
	}
	print_loop(phonebook, n);
	std::cout << "Please enter the index of the contact you wish to view: ";
	std::cin >> k;
	j = 0;
	if (is_digit(k.data()))
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	i = atoi(k.data());
	if (i >= 0 && i < 8 && i < n)
		while (j < 5)
			std::cout << phonebook.cdata[i].get_data(j++) << std::endl;
	else
		std::cout << "Invalid index." << std::endl;
}

static void	add_contact(phonebook *phonebook, int n)
{
	std::string	buff;

	std::cout << "Please enter your first name: ";
	std::cin >> buff;
	phonebook->cdata[n % 8].set_data(0, buff);
	std::cout << "Please enter your last name: ";
	std::cin >> buff;
	phonebook->cdata[n % 8].set_data(1, buff);
	std::cout << "Please enter your nickname: ";
	std::cin >> buff;
	phonebook->cdata[n % 8].set_data(2, buff);
	std::cout << "Please enter your phone number: ";
	std::cin >> buff;
	phonebook->cdata[n % 8].set_data(3, buff);
	std::cout << "Please enter your darkest secret: ";
	std::cin >> buff;
	phonebook->cdata[n % 8].set_data(4, buff);
}

int	main(void)
{
	std::string	buff;
	phonebook	phonebook;
	int			n;

	n = 0;
	while (1)
	{
		std::cout << "Please enter a command: ";
		std::cin >> buff;
		if (!buff.compare("EXIT"))
			return (0);
		else if (!buff.compare("ADD"))
			add_contact(&phonebook, n++);
		else if (!buff.compare("SEARCH"))
			search_contact(phonebook, n);
		else
			std::cout << "Invalid command." << std::endl;
	}
	return (0);
}