#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
	type = "Cat";
	std::cout << "Cat : Default Constructor Called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat : Destructor Called" << std::endl;
	delete brain;
}

Cat::Cat(Cat const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
		*this = obj;
		brain = new Brain();
}

Cat	&Cat::operator= (const Cat &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
		*brain = *obj.brain;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "cat: meow " << std::endl;
}
