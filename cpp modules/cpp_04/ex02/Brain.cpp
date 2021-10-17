#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructed" << std::endl;
}

Brain::Brain(const Brain &_Brain)
{
	*this = _Brain;
	std::cout << "Brain Constructed" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructed" << std::endl;
}

void		Brain::setIdeas(int i, std::string &idea)
{
	if (i < 0 || i >= 100)
		return ;
	this->ideas[i] = idea;
}

std::string	Brain::getIdea(int i) const
{
	if (i < 0 || i >= 100)
		return (NULL);
	return (this->ideas[i]);
}