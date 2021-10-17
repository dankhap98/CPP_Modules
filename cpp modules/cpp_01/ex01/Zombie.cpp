#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout<<"<"<<this->name<<">"<<"BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::Zombie(void)
{
	this->name = "No name";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	announce();
}

Zombie::~Zombie(void)
{
	std::cout<<"<"<<this->name<<">"<<"die"<<std::endl;
}

void	Zombie::setame(std::string name)
{
	this->name = name;
	std::cout<<"<"<<this->name<<">"<<"BraiiiiiiinnnzzzZ..."<<std::endl;
}