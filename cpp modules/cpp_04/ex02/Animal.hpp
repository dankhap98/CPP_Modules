
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
private:
	std::string type;
public:
	Animal();
	Animal(std::string type);
	~Animal();
	virtual std::string	getType() const = 0;
	virtual void		makeSound() const = 0;
};


#endif
