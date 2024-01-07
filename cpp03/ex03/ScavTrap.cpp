#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("42")
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap : Default Constructor Called " << this->name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap : Name Constructor Called " << this->name << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : Destructor Called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj)
{
	std::cout << "ScavTrap : Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
	std::cout << "ScavTrap : Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->hitPoints = obj.getHitPoints();
		this->energyPoints = obj.getEnergyPoints();
		this->attackDamage = obj.getAttackDamage();
	}
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (energyPoints >= 1)
		std::cout << "ScavTrap : " << name << " attacks " << target << std::endl;
	else
		std::cout << name << " doesn't have enough energy to attack!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap  : " << name << " is now in Gate keeper mode." << std::endl;
}
