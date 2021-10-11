#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	j = 1;
	while (argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			if (argv[j][i] >= 97 && argv[j][i] <= 122)
				argv[j][i] -= 32;
			i++;
		}
		j++;
	}
	i = 1;
	while (i < j)
		std::cout << argv[i++];
	std::cout << std::endl;
	return (0);
}
