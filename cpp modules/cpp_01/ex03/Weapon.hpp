#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string _wp_type;
public:
	Weapon(std::string wp_type);
	~Weapon(void);

	void setType(std::string wp_type);
	std::string getType(void);
};

#endif