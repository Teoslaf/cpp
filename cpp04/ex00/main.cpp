#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	//	You Code

	const Animal* j = new Dog();

	std::cout << j->getType() << " " << std::endl;
	return (0);
}
