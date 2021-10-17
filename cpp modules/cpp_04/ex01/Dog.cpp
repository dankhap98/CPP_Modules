#include "Dog.hpp"

Dog::Dog() : Animal("Dog"),  brain(new Brain)
{
	std::cout << getType() << " is born" << std::endl;
}

Dog::~Dog()
{
	std::cout << getType() << " is dead" << std::endl;
}

void		Dog::makeSound() const
{
	std::cout << "Dog sounds" << std::endl;
}