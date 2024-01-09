#ifndef _Cat_HPP_
#define _Cat_HPP_

#include <iostream>
#include "Animal.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class Cat : public Animal
{
public:
	Cat();
	Cat(Cat const &obj);
	~Cat();
	Cat &operator=(const Cat &obj);

private:
	//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
