#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>

template<typename T> 
void easyfind(T a, int b)
{
    if (std::find(a.begin(), a.end(), b) != a.end())
        std::cout << "First occurrence of the second parameter in the first parameter: " << b << std::endl;
    else
        throw std::runtime_error("error");
}

#endif