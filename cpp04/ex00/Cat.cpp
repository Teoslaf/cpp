#include "Cat.hpp"

Cat::Cat()
{
	type = "Car";
	std::cout << "Cat : "<< type << " Default Constructor Called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat : "<< type << " Destructor Called" << std::endl;
}

Cat::Cat(Cat const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Cat	&Cat::operator= (const Cat &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}
