#ifndef _Animal_HPP_
#define _Animal_HPP_

#include <iostream>

class Animal
{
public:
	Animal();
	Animal(Animal const &obj);
	~Animal();
	Animal &operator=(const Animal &obj);
	void makeSound();
	std::string getType() const;

protected:
	std::string type;
};

#endif
