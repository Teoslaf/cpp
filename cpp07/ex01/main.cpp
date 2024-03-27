#include "iter.hpp"


int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	std::string str[] = {"abcde", "sup", "ayooo"};
	::iter(arr, 5, increment<int>);
	::iter(arr, 5, print<int>);
	std::cout << std::endl;
	::iter(str, 3, print<std::string>);
	std::cout << std::endl;

}