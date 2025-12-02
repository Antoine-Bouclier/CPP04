#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog: Default Constructor called." << std::endl;
}

Dog::Dog(const Dog	&copy)
{
	std::cout << "Dog: Copy Constructor called." << std::endl;
	*this = copy;
}
Dog& Dog::operator=(const Dog &src)
{
	if (this != &src)
		this->_type = src._type;
	std::cout << "Dog: Assignement copy constructor called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog: Default Destructor called." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Wouaf Wouaf" << std::endl;
}