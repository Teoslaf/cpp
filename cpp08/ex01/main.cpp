#include "Span.hpp"

// int main()
// {

// 	Span mySpan(10);

// 	std::multiset<unsigned int> numbersToAdd = {1, 50, 30, 4, 5, 6};

// 	mySpan.addNumbers(numbersToAdd.begin(), numbersToAdd.end());
// 	std::cout << mySpan.shortestSpan() << std::endl;
// 	std::cout << mySpan.longestSpan() << std::endl;

// 	return (0);
// }
int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}