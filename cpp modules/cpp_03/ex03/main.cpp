#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap scav("FRAGTRAP");
    scav.attack("blaster");
    scav.takeDamage(25);
    scav.beRepaired(75);
	scav.guardGate();
	scav.highFivesGuys();
	scav.whoAmI();
    return (0);
}