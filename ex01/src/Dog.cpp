#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog: Default Constructor called." << std::endl;
}

Dog::Dog(const Dog	&copy)
{
	std::cout << "Dog: Copy Constructor called." << std::endl;
	*this = copy;
}

Dog::Dog(std::string type) : Animal(type), _brain(new Brain())
{
	std::cout << "Cat: Constructor called with type." << std::endl;
}
Dog& Dog::operator=(const Dog &src)
{
	if (this != &src)
	{
		this->_type = src._type;
		this->_brain = src._brain;
	}
	std::cout << "Dog: Assignement copy constructor called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog: Default Destructor called." << std::endl;
}

Brain*	Dog::getBrain() const
{
	return (this->_brain);
}

void	Dog::makeSound() const
{
	std::cout << "Wouaf Wouaf" << std::endl;
	delete this->_brain;
}