#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog : "<< type << " Default Constructor Called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog : "<< type << " Destructor Called" << std::endl;
}

Dog::Dog(Dog const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Dog	&Dog::operator= (const Dog &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}
