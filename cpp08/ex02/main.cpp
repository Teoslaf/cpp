#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	std::stack<int> test;

	mstack.push(5);
	mstack.push(17);
	mstack.push(20);
	mstack.push(1);

	std::cout << mstack.begin() << std::endl;

}