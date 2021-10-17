
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "============ test1 ===========" << std::endl;
	{
		Animal *animals[10] =
			{
				new Cat(),
				new Cat(),
				new Cat(),
				new Cat(),
				new Cat(),
				new Dog(),
				new Dog(),
				new Dog(),
				new Dog(),
				new Dog()};

		for (int i = 0; i < 10; i++)
		{
			animals[i]->makeSound();
		}
		for (int i = 0; i < 10; i++)
		{
			delete animals[i];
		}
	}
}