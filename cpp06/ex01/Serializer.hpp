#ifndef _Serializer_HPP_
#define _Serializer_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

struct Data
{
	int value;

};
class Serializer
{
public:
	Serializer();
	Serializer(Serializer const &obj);
	~Serializer();
	Serializer &operator=(const Serializer &obj);
	uintptr_t serialize(Data *ptr);
	Data *deserialize(uintptr_t raw);
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
