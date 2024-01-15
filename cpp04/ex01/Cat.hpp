#ifndef _Cat_HPP_
#define _Cat_HPP_

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	// Cat(Cat const &obj);
	~Cat();
	// Cat &operator=(const Cat &obj);
	void makeSound() const;
};

#endif
