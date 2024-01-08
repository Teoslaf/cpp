#ifndef _FragTrap_HPP_
#define _FragTrap_HPP_

#include <iostream>
#include "ClapTrap.hpp"


class	FragTrap : virtual public ClapTrap
{
	public	:
		FragTrap ();
		FragTrap (std::string name);
		FragTrap (FragTrap const &obj);
		~FragTrap ();
		void highFivesGuys(void);
		FragTrap &operator= (const FragTrap &obj);

};

#endif
