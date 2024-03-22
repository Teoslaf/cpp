#include "Array.hpp"
template<typename T>
Array<T>::Array()
{
	// std::cout << "Array : Default Constructor Called" << std::endl;
}
template<typename T>

Array<T>::~Array()
{
	// std::cout << "Array : Destructor Called" << std::endl;
}
template<typename T>

Array<T>:Array(Array const &obj)
{
	// std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}
template<typename T>

Array<T>	&Array::operator= (const Array &obj)
{
	// std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		//	this->attributes = obj.attributes;
		//	...
	}
	return (*this);
}
