#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("42"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap : Default Constructor Called" << std::endl;
}

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
	if (energyPoints >= 1)
		std::cout << "ClapTrap " << name << " attacks " << target << std::endl;
	else
		std::cout << name << " doesn't have enough energy to attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(amount > hitPoints)
	{
		hitPoints = 0;
		std::cout <<  "ClapTrap " << name << " takes " << amount << " damage." << std::endl;
	}
	else
	{
		std::cout <<  "ClapTrap " << name << " takes " << amount << " damage." << std::endl;
		hitPoints -= amount;
		if(hitPoints == 0)
			std::cout <<  "ClapTrap " << name << " F" << std::endl;
	}

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(amount > 10)
		std::cout << "Max amount of energy is 10" << std::endl;
	else if(amount <= 0)
		std::cout << "positiv numbeers only" << std::endl;
	else if((amount + hitPoints) > 10)
		std::cout << "ClapTrap " << name << " can not repair too much power" << std::endl;
	else
	{
		energyPoints += amount;
		std::cout << "ClapTrap " << name << " is repair " << amount << " points"<< std::endl;
	}
}