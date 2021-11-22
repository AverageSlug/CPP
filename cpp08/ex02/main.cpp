#include "mutantstack.hpp"

int main() {
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
    MutantStack<int> Stack;
    int max = 100;
    for (int i = 0; i < max; ++i)
        Stack.push(i);
    for (MutantStack<int>::iterator i = Stack.begin(); i != Stack.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;
    return (0);
}