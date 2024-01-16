#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog : Default Constructor Called" << std::endl;
	brain = new Brain();
}

Dog::~Dog()
{	
	std::cout << "Dog : Destructor Called" << std::endl;
	delete brain;
}

Dog::Dog(Dog const &obj) : Animal(obj), brain(new Brain(*obj.brain))
{
	std::cout << "Copy Constructor Called" << std::endl;
}

Dog	&Dog::operator= (const Dog &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		Animal::operator= (obj);
		delete brain;
		*this->brain = *obj.brain; 
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "dog: bark? " << std::endl;
}
void Dog::setDogIdea(int i, std::string idea)
{
	if(i >= 0 && i < 100)
		this->brain->setIdea(i, idea);
	else
		std::cout << "cant think lmao " << std::endl;
}
std::string Dog::getDogIdea(int i)
{
		if(i >= 0 && i < 100)
		return this->brain->getIdea(i);
	else
		return "";
}
