#include "main.hpp"

int main(int argc, char **argv)
{
	if(argc == 4)
	{
		std::cout << "filename :" << argv[1] << std::endl;
		std::cout << "s1 :" << argv[2] << std::endl;
		std::cout << "s2 :" << argv[3] << std::endl;

	}
	else
		std::cout << "give me filename, s1 and s2" << std::endl;
}
