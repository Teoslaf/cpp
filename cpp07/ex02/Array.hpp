#ifndef _Array_HPP_
#define _Array_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

template <typename T>
class Array
{
public:
	Array() : elements(NULL), sizeArr(0){};
	Array(unsigned int sizeArr) : sizeArr(sizeArr)
	{
		elements = new T[sizeArr];
	};
	~Array()
	{
		delete[] elements;
	};
	Array(Array const &obj) : sizeArr(obj.sizeArr)
	{
		elements = new T[sizeArr];
		for (unsigned int i = 0; i < sizeArr; i++)
			elements[i] = obj.elements[i];
	};
	Array &operator=(const Array &obj)
	{
		if (this != &obj)
		{
			delete[] elements;
			elements = new T[sizeArr];
			for (unsigned int i = 0; i < sizeArr; i++)
				this->elements[i] = obj.elements[i];
			this->sizeArr = obj.sizeArr;
		}
		return (*this);
	};
	T &operator[](unsigned int index)
	{
		if (index >= sizeArr)
			throw std::out_of_range("Index out of range");
		return elements[index];
	}
	unsigned int sizef()
	{
		return sizeArr;
	}

private:
	T *elements;
	unsigned int sizeArr;
};

#endif
