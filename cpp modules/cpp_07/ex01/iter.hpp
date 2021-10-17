#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void iter(T* addr, int len, void(*func)(const T &elem))
{
    for (int i = 0; i < len; i++)
        func(addr[i]);
}

#endif