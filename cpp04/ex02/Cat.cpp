#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat : Default Constructor Called" << std::endl;
	brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat : Destructor Called" << std::endl;
	delete brain;
}

Cat::Cat(Cat const &obj) : Animal(obj), brain(new Brain(*obj.brain))
{
	std::cout << "Copy Constructor Called" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		Animal::operator=(obj);
		delete brain;
		brain = new Brain(*obj.brain);
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "cat: meow " << std::endl;
}

void Cat::setCatIdea(int i, std::string idea)
{
	if (i >= 0 && i < 100)
		this->brain->setIdea(i, idea);
	else
		std::cout << "cant think lmao " << std::endl;
}
std::string Cat::getCatIdea(int i)
{
	if (i >= 0 && i < 100)
		return this->brain->getIdea(i);
	else
		return "";
}
