#ifndef _Animal_HPP_
#define _Animal_HPP_

#include <iostream>

class Animal
{
public:
	virtual ~Animal();
	Animal &operator=(const Animal &obj);
	virtual void makeSound() const = 0;
	std::string getType() const;

protected:
	Animal();
	Animal(Animal const &obj);
	std::string type;
};

#endif
