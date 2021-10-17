#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string Name) : ScavTrap::ScavTrap(Name), FragTrap::FragTrap(Name) 
{
	this->_Name = Name;
	this->_Energypoints = ScavTrap::_Energypoints;
	this->_Hitpoints = FragTrap::_Hitpoints;
	this->_Attackdamage = FragTrap::_Attackdamage;
	ClapTrap::_Name = Name + "_clap_name";
	std::cout << "Constructer from DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(): ScavTrap::ScavTrap(), FragTrap::FragTrap()
{
	std::cout << "Default Constructer from DiamondTrap" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructer Called from DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & pre)
{
	std::cout << "Copy constructor DiamondTrap" << std::endl;
	*this = pre;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_Name = rhs._Name;
	this->_Hitpoints = rhs._Hitpoints;
	this->_Energypoints = rhs._Energypoints;
	this->_Attackdamage = rhs._Attackdamage;
	return (*this);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap name: " << this->_Name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_Name << std::endl;	
}