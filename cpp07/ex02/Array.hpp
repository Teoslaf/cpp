#ifndef _Array_HPP_
#define _Array_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

template <typename T>
class	Array
{
	public	:
		Array () ;
		Array (Array const &obj);
		~Array ();
		Array &operator= (const Array &obj);

	private	:
	T *elements;
	unsigned int size;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
