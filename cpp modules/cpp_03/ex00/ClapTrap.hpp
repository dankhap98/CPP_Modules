#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string	_Name;
	int			_Hitpoints;
	int			_Energypoints;
	int			_Attackdamage;
public:
	ClapTrap(/* args */);
	ClapTrap(ClapTrap const & pre);
	ClapTrap(std::string Name);
	~ClapTrap();

	ClapTrap&	operator=(ClapTrap const & pre);

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif