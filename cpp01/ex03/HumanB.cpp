#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const std::string &name) : weapon(NULL), name(name)
{
}
HumanB::~HumanB()
{

}
void HumanB::setWeapon(const Weapon &hWeapon)
{
	weapon = &hWeapon;
}
void HumanB::attack()
{
	if(weapon != NULL)
		std::cout << name <<  " attacks with their " << weapon->getType() << std::endl; 
	else
		std::cout << name <<  " dwight used paper spray " << std::endl; 

}
