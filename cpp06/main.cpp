#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		return 1;
		std::cout << "give 2 args" << std::endl;	

	}
	ScalarConverter::convert(argv[1]);
	return (0);
}
