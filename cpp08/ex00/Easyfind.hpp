#ifndef _Easyfind_HPP_
#define _Easyfind_HPP_

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>

int easyfind(T& container, int value) {
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), value);

    if (it != container.end()) {
		return std::distance(container.begin(), it);
    } else {
		return -1;
    }
}
#endif
