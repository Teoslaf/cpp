#ifndef _Dog_HPP_
#define _Dog_HPP_

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal, public Brain
{
	public	:
		Dog ();
		Dog (Dog const &obj);
		~Dog ();
		Dog &operator= (const Dog &obj);
		void makeSound() const;

	private	:
		Brain *brain;
};

#endif
