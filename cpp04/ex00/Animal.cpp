#include "Animal.hpp"

Animal::Animal() : type("psciner")
{
	std::cout << "Animal : " << type << " Default Constructor Called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal : " << type << " Destructor Called" << std::endl;
}

Animal::Animal(Animal const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Animal &Animal::operator=(const Animal &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}

void Animal::makeSound()
{
	if (type == "Dog")
		std::cout << "dog " << std::endl;
}
std::string Animal::getType() const
{
	return type;
}