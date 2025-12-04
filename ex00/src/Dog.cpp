#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << RED "Dog: Default Constructor called." RESET << std::endl;
}

Dog::Dog(const Dog	&copy)
{
	std::cout << RED "Dog: Copy Constructor called." RESET << std::endl;
	*this = copy;
}

Dog& Dog::operator=(const Dog &src)
{
	if (this != &src)
		this->_type = src._type;
	std::cout << RED "Dog: Assignement copy constructor called" RESET << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << RED "Dog: Default Destructor called." RESET << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << RED "Wouaf Wouaf" RESET << std::endl;
}