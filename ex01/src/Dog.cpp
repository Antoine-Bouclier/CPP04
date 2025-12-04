#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
	std::cout << RED "Dog: Default Constructor called." RESET << std::endl;
}

Dog::Dog(const Dog	&copy) : Animal(copy), _brain(new Brain(*copy._brain))
{
	std::cout << RED "Dog: Copy Constructor called." RESET << std::endl;
}

Dog& Dog::operator=(const Dog &src)
{
	if (this != &src)
	{
		this->_type = src._type;
		delete this->_brain;
		this->_brain = new Brain(*src._brain);
	}
	std::cout << RED "Dog: Assignement copy constructor called" RESET << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << RED "Dog: Default Destructor called." RESET << std::endl;
	delete this->_brain;
}

Brain*	Dog::getBrain() const
{
	return (this->_brain);
}

void	Dog::makeSound() const
{
	std::cout << RED "Wouaf Wouaf" RESET << std::endl;
}