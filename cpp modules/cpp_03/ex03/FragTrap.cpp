
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap::ClapTrap()
{
    std::cout << "Default constructor FragTrap Called" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap::ClapTrap(Name)
{
	std::cout << "Copy constructer FragTrap Called" << std::endl;
    this->_Name = Name;
    this->_Hitpoints = 100;
    this->_Energypoints = 100;
    this->_Attackdamage = 30;
}

FragTrap::FragTrap(FragTrap const & pre) : ClapTrap::ClapTrap()
{
	std::cout << "Copy constructor Called from FragTrap" << std::endl;
	*this = pre;
}

FragTrap&	FragTrap::operator=(FragTrap const & pre)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_Name = pre._Name;
	this->_Hitpoints = pre._Hitpoints;
	this->_Energypoints = pre._Energypoints;
	this->_Attackdamage = pre._Attackdamage;
	return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor FragTrap Called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "high five" << std::endl;
}
