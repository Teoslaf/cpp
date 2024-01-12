#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
	type = "Dog";
	std::cout << "Dog : Default Constructor Called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog : Destructor Called" << std::endl;
	delete brain;
}

Dog::Dog(Dog const &obj) : brain(nullptr)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	brain = new Brain(*obj.brain);
	type = obj.type;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
		*brain = *obj.brain;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "dog: bark? " << std::endl;
}