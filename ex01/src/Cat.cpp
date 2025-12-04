#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain())
{
	std::cout << BLUE "cat: Default Constructor called." RESET << std::endl;
}

Cat::Cat(const Cat	&copy)
{
	std::cout << BLUE "Cat: Copy Constructor called." RESET << std::endl;
	*this = copy;
}
Cat& Cat::operator=(const Cat &src)
{
	if (this != &src)
	{
		this->_type = src._type;
		delete this->_brain;
		this->_brain = new Brain(*src._brain);
	}
	std::cout << BLUE "Cat: Assignement copy constructor called" RESET << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << BLUE "Cat: Default Destructor called." RESET << std::endl;
	delete this->_brain;
}

Brain*	Cat::getBrain() const
{
	return (this->_brain);
}

void	Cat::makeSound() const
{
	std::cout << BLUE "Miaou Miaou" RESET << std::endl;
}