#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap : name Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap : Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->hitPoints = obj.getHitPoints();
		this->energyPoints = obj.getEnergyPoints();
		this->attackDamage = obj.getAttackDamage();
	}
	return (*this);
}

unsigned int ClapTrap::getHitPoints() const
{
	return (this->hitPoints);
}
unsigned int ClapTrap::getEnergyPoints() const
{
	return (this->energyPoints);
}
unsigned int ClapTrap::getAttackDamage() const
{
	return (this->attackDamage);
}


void ClapTrap::attack(const std::string &target)
{
	if(energyPoints >= 1)
	{
		std::cout << target << ": has " << energyPoints << std::endl;
		energyPoints--;
		std::cout << target << ": has " << energyPoints << std::endl;
	}
	else
	std::cout << name << " doesn't have enough energy to attack!" << std::endl;

}
// void takeDamage(unsigned int amount)
// void beRepaired(unsigned int amount)