#ifndef _MutantStack_HPP_
#define _MutantStack_HPP_

#include <iostream>
#include <vector>
#include <set>
#include <limits>
#include <algorithm>
#include <stack>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

template <typename T>

class MutantStack
{
public:
	MutantStack(){};
	MutantStack(MutantStack const &obj) : data(obj.data){};
	~MutantStack(){};
	MutantStack &operator=(const MutantStack &obj)
	{
		this->data = obj.data;
	}

	bool empty() const
	{
		return data.empty();
	}
	size_t size() const
	{
		return data.size();
	}
	void push(const T& t)
	{
		data.push_back(t);
	}
	void pop()
	{
		data.pop_back();
	}
	T& top()
	{
		return data.back();
	}
	class iterator
	{
		
	};
private:
	std::vector<T> data;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
