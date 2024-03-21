#ifndef _Base_HPP_
#define _Base_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Base
{
	public	:
		virtual ~Base ();
};
class	A: public Base
{

};
class	B: public Base
{

};
class	C: public Base
{

};
		Base * generate(void);
		void identify(Base* p);
		void identify(Base& p);
// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
