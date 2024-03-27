#include "Array.hpp"
#include <iostream>
// #include <Array.hpp>

#define MAX_VAL 750
int main(int, char **)
{
    Array<int> numbers(MAX_VAL);
    int *mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    // SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete[] mirror; //
    return 0;
}
// int main()
// {
// 	Array<int> arr(5);
// 	for (unsigned int i = 0; i < arr.sizef(); ++i)
// 		arr[i] = i;
// 	for (unsigned int i = 0; i < arr.sizef(); ++i)
// 		std::cout << arr[i] << " ";
// 	// std::cout << arr[6] << " ";
// 	std::cout<< std::endl;

// 	// 	Array<int> arr(5);
// 	// for (unsigned int i = 0; i < arr.sizef(); ++i)
// 	// 	arr[i] = i;

// 	// Array<int> arrCopy(arr);

// 	// arrCopy[0] = 100;

// 	// std::cout << "Elements of arr: ";
// 	// for (unsigned int i = 0; i < arr.sizef(); ++i)
// 	// 	std::cout << arr[i] << " ";
// 	// std::cout << std::endl;

// 	// std::cout << "Elements of arrCopy: ";
// 	// for (unsigned int i = 0; i < arrCopy.sizef(); ++i)
// 	// 	std::cout << arrCopy[i] << " ";
// 	// std::cout << std::endl;

// 	return (0);
// }
