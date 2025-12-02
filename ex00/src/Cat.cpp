#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
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
		this->_type = src._type;
	std::cout << "Cat: Assignement copy constructor called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat: Default Destructor called." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou Miaou" << std::endl;
}