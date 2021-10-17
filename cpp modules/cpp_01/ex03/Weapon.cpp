#include "Weapon.hpp"

Weapon::Weapon(std::string wp_type)
{
	this->setType(wp_type);
}

Weapon::~Weapon(void)
{

}

void	Weapon::setType(std::string wp_type)
{
	this->_wp_type = wp_type;
}

std::string		Weapon::getType(void)
{
	return (this->_wp_type);
}