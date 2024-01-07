#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("42")
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap : "<< name << " Default Constructor Called" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap : "<< name << " name Constructor Called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " Destructor Called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
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

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap : " << name << " high5" << std::endl;
}
