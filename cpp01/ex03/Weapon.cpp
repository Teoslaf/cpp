#include "Weapon.hpp"

Weapon::Weapon(const char *type) : type(type)
{

}

Weapon::~Weapon()
{
	// std::cout << "deconst" << std::endl;
}

const std::string &Weapon::getType() const
{
	return type;
}

void Weapon::setType(const std::string &newType)
{
	type = newType;
}
