#include "Easyfind.hpp"

int main()
{
	std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 2, 3};
	int index = easyfind(vec, 3);
	if(index == -1)
		std::cout << "Element not found in the container." << std::endl;
	else
		std::cout << "Index of the element : "<< index << std::endl;

}