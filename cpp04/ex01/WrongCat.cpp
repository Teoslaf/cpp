#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "Cat";
	std::cout << "WrongCat : Default Constructor Called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat : Destructor Called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

WrongCat	&WrongCat::operator= (const WrongCat &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat: meow " << std::endl;
}
