
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
	virtual	~Animal();
	virtual std::string	getType() const;
	virtual void		makeSound() const;
};


#endif
