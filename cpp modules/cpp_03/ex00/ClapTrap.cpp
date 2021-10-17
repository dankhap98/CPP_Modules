#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name) : _Name(Name), _Hitpoints(10), _Energypoints(10), _Attackdamage(0)
{
	std::cout << "Default constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & pre)
{
	std::cout << "Copy constructor Called from ClapTrap" << std::endl;
	*this = pre;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & pre)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_Name = pre._Name;
	this->_Hitpoints = pre._Hitpoints;
	this->_Energypoints = pre._Energypoints;
	this->_Attackdamage = pre._Attackdamage;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor has been called" << std::endl;
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->_Name << " attacks " <<  target;
	std::cout << ", causing " << this->_Attackdamage << " points of damage" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_Name << " takes " <<  amount;
	std::cout << " points of damage" << std::endl;
	this->_Energypoints = this->_Energypoints - amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_Name << " restores " <<  amount;
	std::cout << " HP" << std::endl;

	this->_Energypoints = this->_Energypoints + amount;
}

