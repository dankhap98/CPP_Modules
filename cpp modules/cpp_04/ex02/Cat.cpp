#include "Cat.hpp"

Cat::Cat(): Animal("cat"),  brain(new Brain)
{
	std::cout << getType() << " is born" << std::endl;
}

Cat::Cat(const Cat &_Cat)
{
	this->brain = new Brain;
	for (int i = 0; i < 100; i++)
	{
		this->brain->setIdeas(i, _Cat.brain->getIdea(i));
	}
	this->name = _Cat.name;
	this->type = _Cat.type;
	std::cout << this->type << " " << this->name << " is born" << std::endl;
}

Cat::~Cat()
{
	std::cout << getType() << " is dead" << std::endl;
}

void		Cat::makeSound() const
{
	std::cout << "Cat sounds" << std::endl;
}