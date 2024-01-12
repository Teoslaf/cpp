#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	Dog originalDog;
	originalDog.setIdea(0, "Original Dog Idea");
	Dog copiedDog = originalDog;
	originalDog.setIdea(0, "Modified Original Dog Idea");
	std::string copiedDogIdea = copiedDog.getIdea(0);
	std::cout << "==================org: " << originalDog.getIdea(0) << std::endl;
	std::cout << "==================cpy: "<< copiedDog.getIdea(0) << std::endl;

}
