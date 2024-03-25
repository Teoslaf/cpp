#ifndef _Span_HPP_
#define _Span_HPP_

#include <iostream>
#include <vector>


// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Span
{
	public	:
		Span (unsigned int N);
		Span (Span const &obj);
		~Span ();
		Span &operator= (const Span &obj);
		void addNumber();
	private	:
		unsigned int N;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
