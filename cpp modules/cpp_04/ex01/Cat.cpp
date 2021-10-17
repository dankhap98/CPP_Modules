#include "Cat.hpp"

Cat::Cat(): Animal("cat"),  brain(new Brain)
{
	std::cout << getType() << " is born" << std::endl;
}

Cat::~Cat()
{
	std::cout << getType() << " is dead" << std::endl;
}

void		Cat::makeSound() const
{
	std::cout << "Cat sounds" << std::endl;
}