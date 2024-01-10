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

Dog::Dog(Dog const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = obj;
	brain = new Brain();
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