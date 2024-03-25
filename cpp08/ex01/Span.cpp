#include "Span.hpp"

Span::Span(unsigned int N)
{
	std::vector<int> myvector;

  // set some content in the vector:
  for (unsigned int i=0; i<N; i++) myvector.push_back(i);

  std::cout << "size: " << myvector.size() << "\n";
  std::cout << "capacity: " << myvector.capacity() << "\n";
  std::cout << "max_size: " << myvector.max_size() << "\n";
	// std::cout << "Span : Default Constructor Called" << std::endl;
}

Span::~Span()
{
	// std::cout << "Span : Destructor Called" << std::endl;
}

Span::Span(Span const &obj)
{
	// std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Span	&Span::operator= (const Span &obj)
{
	// std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		//	this->attributes = obj.attributes;
		//	...
	}
	return (*this);
}
