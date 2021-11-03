#include <iostream>
#include <iomanip>
#include <fstream>

int	main(int argc, char **argv) {
	std::fstream	file;
	std::fstream	file2;
	std::string		str;
	int				n;

	if (argc != 4 || !argv[1] || !argv[2] || !argv[3]) {
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	file.open(argv[1], std::ios::in);
	if (!file) {
		std::cout << "Error opening file" << std::endl;
		return (1);
	}
	file2.open(std::string(argv[1]) + ".replace", std::ios::out);
	if (!file2) {
		std::cout << "Error creating new file" << std::endl;
		return (1);
	}
	getline(file, str);
	while (file)
	{
		while ((n = str.find(argv[2])) >= 0)
		{
			str.erase(n, strlen(argv[2]));
			str.insert(n, argv[3]);
		}
		file2 << str;
		getline(file, str);
		if (file)
			file2 << std::endl;
	}
	if (!str.length())
		file2 << std::endl;
	file.close();
	file2.close();
	return (0);
}