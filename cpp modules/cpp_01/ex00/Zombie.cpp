#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout<<"<"<<this->name<<">"<<"BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::Zombie(void)
{
	this->name = "No name";
	announce();
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