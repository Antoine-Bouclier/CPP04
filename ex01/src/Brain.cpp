#include "Brain.hpp"

/* -- Default Constructor -- */
Brain::Brain() : _index(0)
{
	std::cout << "Brain: Default Constructor called." << std::endl;
}

/* -- Copy Constructor -- */
Brain::Brain(const Brain &copy)
{
	std::cout << "Brain: Copy Constructor called." << std::endl;
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
	std::cout << "Brain: Assignement copy constructor called" << std::endl;
	return (*this);
}

/* -- Destructor -- */
Brain::~Brain()
{
	std::cout << "Brain: Default destructor called." << std::endl;
}

/* -- Getters -- */
const std::string	Brain::getidea(unsigned int i) const
{
	if (i < this->_index)
		return (this->_ideas[i]);
	else
	{
		std::cout << "Invalid index!" << std::endl;
		std::cout << "Valid index: [0-" << this->_index << "]" << std::endl;
	}
	return (NULL);
}

/* -- Setters -- */
void	Brain::setidea(const std::string &idea)
{
	this->_ideas[this->_index] = idea;
	this->_index++;
}