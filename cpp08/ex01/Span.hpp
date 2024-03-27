#ifndef _Span_HPP_
#define _Span_HPP_

#include <iostream>
#include <vector>
#include <set>
#include <limits>
#include <algorithm>




// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class Span
{
public:
	Span(unsigned int N);
	Span(Span const &obj);
	~Span();
	Span &operator=(const Span &obj);
	void addNumber(unsigned int element);
	void addNumbers(std::multiset<unsigned int>::iterator start, std::multiset<unsigned int>::iterator end);

	unsigned int shortestSpan();
	unsigned int longestSpan();
	class MaxElementsException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class EmptyElementsException : public std::exception
	{
	public:
		const char *what() const throw();
	};
private:
	unsigned int N;
	std::multiset<unsigned int> myvector;
};

#endif
