#include "Karen.hpp"

int	main(int argc, char **argv) {
	Karen	v3;

	if (argc != 2)
		return (0);
	v3.complain(argv[1]);
	return (0);
}