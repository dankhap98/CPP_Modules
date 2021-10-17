#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string Name);
    ScavTrap(ScavTrap const & pre);
	ScavTrap&	operator=(ScavTrap const & pre);
    ~ScavTrap();
    void    guardGate( void );
};

#endif