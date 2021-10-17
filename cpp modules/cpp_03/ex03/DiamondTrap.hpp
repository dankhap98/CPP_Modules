#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _Name;
	public:
	    DiamondTrap();
	    DiamondTrap(std::string Name);
	    DiamondTrap(DiamondTrap const & pre);
		DiamondTrap&	operator=(DiamondTrap const & pre);
	    ~DiamondTrap();
		// void	attack()
	    void	whoAmI( void );
};

#endif