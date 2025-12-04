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
		for (unsigned int i = 0; i < src._index; i++)
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
const std::string	Brain::getIdea(unsigned int i) const
{
	if (i < this->_index)
		return (this->_ideas[i]);
	else
	{
		std::cout << YELLOW "Invalid index!" << std::endl;
		std::cout << "Valid index: [0-" << this->_index << "]" RESET << std::endl;
	}
	return ("");
}

/* -- Setters -- */
void	Brain::setIdea(const std::string &idea)
{
	if (this->_index < 100)
	{
		this->_ideas[this->_index] = idea;
		this->_index++;
	}
	else
		std::cout << "No more space" << std::endl;
}