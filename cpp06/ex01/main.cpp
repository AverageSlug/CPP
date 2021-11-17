#include <iostream>

struct	Data {
};

uintptr_t	serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}

int	main() {
	Data	ptr;
	std::cout << &ptr << std::endl;
	std::cout << deserialize(serialize(&ptr)) << std::endl;
}