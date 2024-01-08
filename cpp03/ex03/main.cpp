#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	// Create a DiamondTrap object
	DiamondTrap diamondTrap("Diamond");

	// Call the whoAmI method
	diamondTrap.whoAmI();

	// Test the inherited ClapTrap methods
	diamondTrap.attack("Enemy");
	diamondTrap.takeDamage(20);
	diamondTrap.beRepaired(10);

	// Test DiamondTrap-specific methods
	diamondTrap.guardGate();

	return 0;
}