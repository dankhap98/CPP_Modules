#include"Zombie.hpp"

int	main(void)
{
	Zombie zomb1 = Zombie();

	Zombie *zomb2 = newZombie("Василий");
	delete (zomb2);

	Zombie *zomb3 = newZombie("Юлий");
	delete (zomb3);

	randomChump("Чак");

	return (0);
}