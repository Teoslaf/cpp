#include "iter.hpp"

void increment(int &x)
{
	x++;
}
void print(int &num)
{
	std::cout << num << " ";
}

void printChar(const char &x)
{
	std::cout << x;
}
int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	 const char *str = "a b c d e";
	::iter(arr, 5, increment);
	::iter(arr, 5, print);
	std::cout << std::endl;
	::iter(str, 9, printChar);
	std::cout << std::endl;

}