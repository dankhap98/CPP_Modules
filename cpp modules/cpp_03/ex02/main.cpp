#include "FragTrap.hpp"

int main()
{
    FragTrap scav("FRAGTRAP");
    scav.attack("blaster");
    scav.takeDamage(25);
    scav.beRepaired(75);
    return (0);
}