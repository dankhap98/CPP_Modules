#include"Zombie.hpp"

int	main(void)
{

	Zombie *zombs = zombieHorde(10, "Lenin");
	delete [] zombs;
	return (0);
}