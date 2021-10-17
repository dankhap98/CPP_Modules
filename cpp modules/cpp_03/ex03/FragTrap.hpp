#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string Name);
    FragTrap(FragTrap const & pre);
	FragTrap&	operator=(FragTrap const & pre);
    ~FragTrap();
    void highFivesGuys( void );
};

#endif