#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("psciner")
{
	std::cout << "WrongAnimal : Default Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal : Destructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal:  im a wrong animal" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}