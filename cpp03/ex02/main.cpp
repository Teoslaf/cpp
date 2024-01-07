#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap fragtrap1;	
	FragTrap fragtrap2("Fraggy"); 

	fragtrap1.attack("Target1"); 
	fragtrap2.attack("Target2"); 

	fragtrap1.highFivesGuys(); 
	fragtrap2.highFivesGuys(); 

	FragTrap fragtrap3 = fragtrap2;
	fragtrap3.attack("Target3");

	fragtrap3 = fragtrap1;
	fragtrap3.attack("Target4");

	return 0;
}
