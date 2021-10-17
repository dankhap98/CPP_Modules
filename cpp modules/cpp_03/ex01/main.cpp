#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("SCAVTRAP");
    scav.attack("blaster");
    scav.takeDamage(25);
    scav.beRepaired(75);
    return (0);
}