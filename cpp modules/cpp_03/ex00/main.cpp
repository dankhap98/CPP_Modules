#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("CLAPTRAP");
    claptrap.attack("blaster");
    claptrap.takeDamage(25);
    claptrap.beRepaired(75);
    return (0);
}