#ifndef _SMT_HPP_
#define _SMT_HPP_

#include <iostream>
#include <string>
template <typename T>
void swap(T& x, T& y)
{
	T temp = x;
	x = y;
	y = temp;
}
template <typename N>
N min(N& x, N& y)
{
	if(x < y)
		return x;
	else if(x == y)
		return y;
	return y;
}
template <typename M>
M max(M& x, M& y)
{
	if(x > y)
		return x;
	else if(x == y)
		return y;
	return y;
}
#endif