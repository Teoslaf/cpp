#ifndef _ITER_HPP_
#define _ITER_HPP_

#include <iostream>
#include <string>

template <typename T, typename F>
void iter(T *adress, size_t length, F f)
{
	if(!adress || !f)
		return;
	for(size_t i = 0; i < length; i++)
		f(adress[i]);
}
template <typename T>
void print(T &t)
{
	std::cout << t << " ";
}
template <typename T>
void increment(T &t)
{
	t++;
}

#endif