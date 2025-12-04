#include "Animal.hpp"

Animal::Animal() : _type("Default")
{
	std::cout << GREEN "Animal: Default Constructor called." RESET << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << GREEN "Animal: Parameterized Constructor called." RESET << std::endl;
}
Animal::Animal(const Animal	&copy)
{
	std::cout << GREEN "Animal: Copy Constructor called." RESET << std::endl;
	*this = copy;
}
Animal& Animal::operator=(const Animal &src)
{
	if (this != &src)
		this->_type = src._type;
	std::cout << GREEN "Animal: Assignement copy constructor called" RESET << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << GREEN "Animal: Default Destructor called." RESET << std::endl;
}

/* -- Getters -- */
const std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << GREEN "make noises"  RESET<< std::endl;
}