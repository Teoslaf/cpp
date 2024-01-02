#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
	{
		Harl Harl;
		for (size_t i = 0; i < strlen(argv[1]); i++)
			argv[1][i] = std::toupper(argv[1][i]);
		Harl.complain(argv[1]);
	}
}
