#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	const Weapon *weapon;
	std::string name;

public:
	HumanB(const std::string &name);
	void attack();
	void setWeapon(const Weapon &hWeapon);
	~HumanB();
};
#endif
