#include "iter.hpp"

template <typename T>
void display(T const &_ar) { std::cout << _ar << std::endl; }


int main()
{
	int i[5] = { 1, 5, 2, 4, 3};
	float f[5] = { 1.5f, 5.2f, 2.4f, 4.3f, 3.1f};

	iter(i, 5, display);
	iter(f, 5, display);

	return (0);
}

