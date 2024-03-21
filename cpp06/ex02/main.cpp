#include "Base.hpp"

int main()
{
	A a;
	B b;
	C c;
	Base *obj = generate();
	identify(obj);
	identify(b);
	identify(a);
	identify(c);
	delete obj;
	return (0);
}
