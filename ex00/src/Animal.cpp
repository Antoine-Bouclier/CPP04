#include "Animal.hpp"

Animal::Animal() : _type("Default")
{
	std::cout << "Animal: Default Constructor called." << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal: Parameterized Constructor called." << std::endl;
}
Animal::Animal(const Animal	&copy)
{
	std::cout << "Animal: Copy Constructor called." << std::endl;
	*this = copy;
}
Animal& Animal::operator=(const Animal &src)
{
	if (this != &src)
		this->_type = src._type;
	std::cout << "Animal: Assignement copy constructor called" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal: Default Destructor called." << std::endl;
}

/* -- Getters -- */
const std::string	Animal::getType() const
{
	return (this->_type);
}

/* -- Setters -- */
void	Animal::setType(const std::string &type)
{
	this->_type = type;
}

void	Animal::makeSound() const
{
	std::cout << "make noises" << std::endl;
}