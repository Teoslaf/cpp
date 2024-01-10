#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete i;
	delete j;
	delete meta;
return 0;
}
// int main()
// {
// 	const WrongAnimal *meta = new WrongAnimal();
// 	const WrongAnimal *i = new WrongCat();
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound();
// 	meta->makeSound();

// 	delete i;
// 	delete meta;

// 	return 0;
// }
// int main()
// {
// 	// Test the Animal class
// 	const Animal *meta = new Animal;
// 	std::cout << "Animal type: " << meta->getType() << std::endl;
// 	meta->makeSound(); // Should print a generic sound

// 	// Test the Dog class
// 	const Animal *j = new Dog();
// 	std::cout << "Dog type: " << j->getType() << std::endl;
// 	j->makeSound(); // Should print a dog sound

// 	// Test the Cat class
// 	const Animal *i = new Cat();
// 	std::cout << "Cat type: " << i->getType() << std::endl;
// 	i->makeSound(); // Should print a cat sound

// 	// Test the WrongAnimal class
// 	const WrongAnimal *wrongMeta = new WrongAnimal;
// 	std::cout << "WrongAnimal type: " << wrongMeta->getType() << std::endl;
// 	wrongMeta->makeSound(); // Should print a wrong generic sound

// 	// Test the WrongCat class
// 	const WrongAnimal *wrongI = new WrongCat();
// 	std::cout << "WrongCat type: " << wrongI->getType() << std::endl;
// 	wrongI->makeSound(); // Should print a wrong generic sound

// 	// Clean up the dynamically allocated memory
// 	delete meta;
// 	delete j;
// 	delete i;
// 	delete wrongMeta;
// 	delete wrongI;

// 	return 0;
// }
