#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain())
{
	std::cout << "cat: Default Constructor called." << std::endl;
}

Cat::Cat(const Cat	&copy)
{
	std::cout << "Cat: Copy Constructor called." << std::endl;
	*this = copy;
}
Cat& Cat::operator=(const Cat &src)
{
	if (this != &src)
	{
		this->_type = src._type;
		this->_brain = src._brain;
	}
	std::cout << "Cat: Assignement copy constructor called" << std::endl;
	return (*this);
}

Cat::Cat(std::string type) : Animal(type), _brain(new Brain())
{
	std::cout << "Cat: Constructor called with type." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat: Default Destructor called." << std::endl;
}

Brain*	Cat::getBrain() const
{
	return (this->_brain);
}

void	Cat::makeSound() const
{
	std::cout << "Miaou Miaou" << std::endl;
	delete this->_brain;
}