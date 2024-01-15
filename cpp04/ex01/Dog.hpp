#ifndef _Dog_HPP_
#define _Dog_HPP_

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"


class	Dog : public Animal
{
	private	:
		Brain *brain;
	public	:
		Dog ();
		Dog (Dog const &obj);
		~Dog ();
		Dog &operator= (const Dog &obj);
		void makeSound() const;
};

#endif
