#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main()
// {
// 	Animal *animals[100];
// 	for (int i = 0; i < 50; ++i)
// 	{
// 		animals[i] = new Dog();
// 	}
// 	for (int i = 50; i < 100; ++i)
// 	{
// 		animals[i] = new Cat();
// 	}
// 	for (int i = 0; i < 100; ++i)
// 	{
// 		delete animals[i];
// 	}
// }

int main()
{
	std::cout << "==================   BASIC TEST   ==================\n"
			  << std::endl;

	Cat *cat = new Cat();
	Dog *dog = new Dog();

	std::cout << std::endl;

	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;

	std::cout << std::endl;

	cat->makeSound();
	dog->makeSound();

	std::cout << std::endl;

	// TEST DEEP COPY
	std::cout << "================== TEST DEEP COPY ==================\n"
			  << std::endl;

	cat->setCatIdea(0, "I like potatoes");
	dog->setDogIdea(0, "I like bones");

	std::cout << "Cat ideas:" << std::endl;
		std::cout << "Idea: " << cat->getCatIdea(0) << std::endl;
	std::cout << std::endl;

	std::cout << "Dog ideas:" << std::endl;
		std::cout << "Idea: " << dog->getDogIdea(0) << std::endl;
	std::cout << std::endl;

	std::cout << "Create cat2" << std::endl;
	Cat *cat2 = new Cat();
	std::cout << std::endl;

	std::cout << "Cat2 ideas" << std::endl;
		std::cout << "Idea: " << cat2->getCatIdea(0) << std::endl;
	std::cout << std::endl;

	std::cout << "Cat2 = Cat" << std::endl;
	*cat2 = *cat;
	std::cout << std::endl;

	std::cout << "Cat ideas:" << std::endl;
		std::cout << "Idea: " << cat->getCatIdea(0) << std::endl;
	std::cout << std::endl;

	std::cout << "Cat2 ideas" << std::endl;
		std::cout << "Idea: " << cat2->getCatIdea(0) << std::endl;
	std::cout << std::endl;

	std::cout << "Cat ideas (now he hates potatoes)" << std::endl;
	cat->setCatIdea(0, "I hate potatoes");
		std::cout << "Idea: " << cat->getCatIdea(0) << std::endl;
	std::cout << std::endl;

	std::cout << "Cat2 ideas" << std::endl;
		std::cout << "Idea: " << cat2->getCatIdea(0) << std::endl;
	std::cout << std::endl;

	std::cout << "==================   CLEAN ALL    ==================\n"
			  << std::endl;

	delete cat;
	delete dog;
	delete cat2;

	std::cout << std::endl;

	std::cout << "================ SUBJECT ARRAY TEST ================\n"
			  << std::endl;

	Animal *animals[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 10 / 2)
		{
			animals[i] = new Cat();
		}
		else
		{
			animals[i] = new Dog();
		}
	}

	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		animals[i]->makeSound();
	}

	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}

	return 0;
}