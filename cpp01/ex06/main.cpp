#include "Harl.hpp"

int main(int argc, char **argv)
{
	size_t length = 0;
	if (argc != 2)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
	{
		while (argv[1][length] != '\0')
			length++;
		Harl Harl;
		for (size_t i = 0; i < length; i++)
			argv[1][i] = std::toupper(argv[1][i]);
		Harl.complain(argv[1]);
	}
}
