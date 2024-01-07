#include "ClapTrap.hpp"

int main()
{
ClapTrap claptrap1("Max");
ClapTrap claptrap2("Kars");

claptrap1.attack("minishell");
claptrap2.attack("Cube3D");

claptrap1.takeDamage(5);
claptrap2.takeDamage(12);

claptrap1.beRepaired(3);
claptrap2.beRepaired(8);

// std::cout << "Teo  attackDamage: " << Trap1.getAttackDamage() << " EnergyPoints:" << Trap1.getEnergyPoints()<< " HitPoints: " << Trap1.getHitPoints()<< " " << std::endl;
// std::cout << "Nela attackDamage: " << Trap2.getAttackDamage() << " EnergyPoints:" << Trap2.getEnergyPoints()<< " HitPoints: " << Trap2.getHitPoints()<< " " << std::endl;

return (0);
}
