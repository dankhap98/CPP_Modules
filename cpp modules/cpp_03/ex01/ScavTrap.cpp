
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap::ClapTrap()
{
    std::cout << "Default constructor ScavTrap Called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap::ClapTrap(Name)
{
	std::cout << "Copy constructer ScavTrap Called" << std::endl;
    this->_Name = Name;
    this->_Hitpoints = 100;
    this->_Energypoints = 50;
    this->_Attackdamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & pre) : ClapTrap::ClapTrap()
{
	std::cout << "Copy constructor Called from ScavTrap" << std::endl;
	*this = pre;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & pre)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_Name = pre._Name;
	this->_Hitpoints = pre._Hitpoints;
	this->_Energypoints = pre._Energypoints;
	this->_Attackdamage = pre._Attackdamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor ScavTrap Called" << std::endl;
}

void    ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}