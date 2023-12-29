#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : weapon(weapon), name(name)
{

}
HumanA::~HumanA()
{
}
void HumanA::attack()
{
	std::cout << name <<  " attacks with their " << weapon.getType() << std::endl; 
}
