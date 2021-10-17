#include "Animal.hpp"

Animal::Animal()
{
	this->type = "--";
	std::cout << "default animal constructor/n";
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "default animal constructor/n";
}

Animal::~Animal()
{

}

void		Animal::makeSound() const
{
	std::cout << "strange sounds from the forest" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}