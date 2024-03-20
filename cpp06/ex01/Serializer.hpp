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
	static uintptr_t serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
