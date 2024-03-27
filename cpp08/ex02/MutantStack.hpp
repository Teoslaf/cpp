#ifndef _MutantStack_HPP_
#define _MutantStack_HPP_

#include <iostream>
#include <vector>
#include <set>
#include <limits>
#include <algorithm>
#include <stack>
#include <list>


// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

template <typename T, typename Container = std::deque<T>>
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack() {}
	MutantStack(const MutantStack &other) : std::stack<T, Container>(other)
	{
		*this = other;
	}
	~MutantStack() {}

	MutantStack &operator=(const MutantStack &other)
	{
		if (this == &other)
			return *this;
		this->std::stack<T, Container>::operator=(other);
		return *this;
	}

	bool empty() const
	{
		return std::stack<T>::empty();
	}
	size_t size() const
	{
		return std::stack<T>::size();
	}
	void push(const T &t)
	{
		std::stack<T>::push(t);
	}
	void pop()
	{
		std::stack<T>::pop();
	}
	T &top()
	{
		return std::stack<T>::top();	
	}
	typedef typename std::stack<T, Container>::container_type::iterator iterator;

	iterator begin()
	{
		return this->std::stack<T, Container>::c.begin();
	}
	iterator end()
	{
		return this->std::stack<T, Container>::c.end();
	}
};

#endif
