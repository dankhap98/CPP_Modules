#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *zomb = new Zombie(name);
	return (zomb);
}

void randomChump( std::string name )
{
	if (name.length() > 0)
	{
		Zombie *zomb4 = newZombie(name);
		delete (zomb4);
	}
	
}