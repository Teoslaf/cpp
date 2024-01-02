#include "Harl.hpp"

int main(int argc, char **argv)
{
	if(argc != 2)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
	{
		Harl Harl;
		Harl.complain(argv[1]);
	}

}
