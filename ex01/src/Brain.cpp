#include "Brain.hpp"

/* -- Default Constructor -- */
Brain::Brain() : _index(0)
{
	std::cout << YELLOW "Brain: Default Constructor called." RESET << std::endl;
}

/* -- Copy Constructor -- */
Brain::Brain(const Brain &copy)
{
	std::cout << YELLOW "Brain: Copy Constructor called." RESET << std::endl;
	*this = copy;
}

/* -- Assignement operator -- */
Brain& Brain::operator=(const Brain &src)
{
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = src._ideas[i];
		this->_index = src._index;
	}
	std::cout << YELLOW "Brain: Assignement copy constructor called" RESET << std::endl;
	return (*this);
}

/* -- Destructor -- */
Brain::~Brain()
{
	std::cout << YELLOW "Brain: Default destructor called." RESET << std::endl;
}

/* -- Getters -- */
const std::string	Brain::getidea(unsigned int i) const
{
	if (i < this->_index)
		return (this->_ideas[i]);
	else
	{
		std::cout << YELLOW "Invalid index!" << std::endl;
		std::cout << "Valid index: [0-" << this->_index << "]" RESET << std::endl;
	}
	return (NULL);
}

/* -- Setters -- */
void	Brain::setidea(const std::string &idea)
{
	this->_ideas[this->_index] = idea;
	this->_index++;
}