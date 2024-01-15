#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain : Default Constructor Called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain : Destructor Called" << std::endl;
}

// Brain::Brain(Brain const &obj)
// {
// 	std::cout << "Copy Constructor Called" << std::endl;
// 	if (this != &obj)
// 		*this = obj;
// }

// Brain &Brain::operator=(const Brain &obj)
// {
// 	std::cout << "Copy Assignment Operator Called" << std::endl;
// 	if (this != &obj)
// 	{
// 		//	this->attributes = obj.attributes;
// 		//	...
// 	}
// 	return (*this);
// }

void Brain::setIdea(int index, std::string idea)
{
	ideas[index] = idea;
}
std::string Brain::getIdea(int index)
{
	return(ideas[index]);
}