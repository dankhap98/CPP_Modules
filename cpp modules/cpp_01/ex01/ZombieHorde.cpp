#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int	i;

	Zombie *zomb = new Zombie[N];
	i=-1;
	while (++i < N)
	{
		zomb[i].setame(name);
	}
	return (zomb);
}