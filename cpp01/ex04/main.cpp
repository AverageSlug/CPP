#include <iostream>
#include <iomanip>
#include <fstream>

int	main(int argc, char **argv) {
	std::fstream	file;
	std::fstream	file2;
	std::string		str;
	int				n;

	if (argc != 4 || !argv[1] || !argv[2] || !argv[3])
		return (1);
	file.open(argv[1], std::ios::in);
	if (!file)
		return (0);
	file2.open(std::string(argv[1]) + ".replace", std::ios::out);
	if (!file2)
		return (0);
	file >> str;
	while (file)
	{
		while ((n = str.find(argv[2])) >= 0)
		{
			str.erase(n, strlen(argv[2]));
			str.insert(n, argv[3]);
		}
		file2 << str;
		file >> str;
		if (file)
			file2 << " ";
	}
	file.close();
	file2.close();
	return (0);
}