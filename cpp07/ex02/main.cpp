#include "Array.hpp"

int main()
{
	Array<int> arr(5);
	for (unsigned int i = 0; i < arr.sizef(); ++i)
		arr[i] = i;
	for (unsigned int i = 0; i < arr.sizef(); ++i)
		std::cout << arr[i] << " ";
	// std::cout << arr[6] << " ";
	std::cout<< std::endl;
	
	// 	Array<int> arr(5);
	// for (unsigned int i = 0; i < arr.sizef(); ++i)
	// 	arr[i] = i;

	// Array<int> arrCopy(arr);

	// arrCopy[0] = 100;

	// std::cout << "Elements of arr: ";
	// for (unsigned int i = 0; i < arr.sizef(); ++i)
	// 	std::cout << arr[i] << " ";
	// std::cout << std::endl;

	// std::cout << "Elements of arrCopy: ";
	// for (unsigned int i = 0; i < arrCopy.sizef(); ++i)
	// 	std::cout << arrCopy[i] << " ";
	// std::cout << std::endl;

	return (0);
}
