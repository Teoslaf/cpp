#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain : Default Constructor Called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = "default";
	}
}

Brain::~Brain()
{
	std::cout << "Brain : Destructor Called" << std::endl;
}

Brain::Brain(Brain const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	for (int i = 0; i < 100; ++i)
	{
		ideas[i] = obj.ideas[i];
	}
}

Brain &Brain::operator=(const Brain &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		for (int i = 0; i < 100; ++i)
		{
			ideas[i] = obj.ideas[i];
		}
	}
	return (*this);
}

void Brain::setIdea(int i, std::string idea)
{
	if (i >= 0 && i < 100)
		ideas[i] = idea;
	else
		return;
}
std::string Brain::getIdea(int i)
{
	if (i >= 0 && i < 100)
		return ideas[i];
	else 
		return "";
}