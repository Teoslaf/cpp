#include "ClapTrap.hpp"

int main()
{
	ClapTrap Trap1("Teo");
	ClapTrap Trap2("Nela");

	Trap2.attack("Teo");
	Trap1.attack("Nela");
	Trap1.attack("Nela");
	std::cout <<Trap1.getEnergyPoints() << std::endl;

	// Trap1.attack("Teo");
	return (0);
}
