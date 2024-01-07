#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap scavtrap1;				// Default constructor
	ScavTrap scavtrap2("Guardian"); // Name constructor

	scavtrap1.attack("Target1"); // Test attack function
	scavtrap2.attack("Target2"); // Test attack function

	scavtrap1.guardGate(); // Test guardGate function
	scavtrap2.guardGate(); // Test guardGate function

	ScavTrap scavtrap3 = scavtrap2; // Copy constructor
	scavtrap3.attack("Target3");

	scavtrap3 = scavtrap1; // Copy assignment operator
	scavtrap3.attack("Target4");

	return (0);
}
