#ifndef _DiamondTrap_HPP_
#define _DiamondTrap_HPP_

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap
{
	private	:
	std::string name;
	public	:
		DiamondTrap ();
		DiamondTrap (DiamondTrap const &obj);
		~DiamondTrap ();
		DiamondTrap &operator= (const DiamondTrap &obj);

};

#endif
