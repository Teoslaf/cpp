#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("ClapTrap_42")
{
	this->_name = "42";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap : " << _name << " Default Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap")
{
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	this->_name = name;
	std::cout << "DiamondTrap : " << name << " Default Constructor Called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap : Destructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj)
{
	std::cout << "DiamondTrap : Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
{
	std::cout << "DiamondTrap : Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->hitPoints = obj.getHitPoints();
		this->energyPoints = obj.getEnergyPoints();
		this->attackDamage = obj.getAttackDamage();
	}
	return (*this);
}
void DiamondTrap::whoAmI()
{
	std::cout << "my name is " << _name <<  " my ClapTrap name is " << name << std::endl;
}
