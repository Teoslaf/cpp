#ifndef _ITER_HPP_
#define _ITER_HPP_

#include <iostream>
#include <string>

template <typename T>
void iter(T *adress, size_t length, void(*f)(T&))
{
	if(!adress || !f)
		return;
	for(size_t i = 0; i < length; i++)
		f(adress[i]);
}
#endif