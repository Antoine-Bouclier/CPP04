#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Default")
{
	std::cout << "WrongAnimal: Default Constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal: Parameterized Constructor called." << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal	&copy)
{
	std::cout << "WrongAnimal: Copy Constructor called." << std::endl;
	*this = copy;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &src)
{
	if (this != &src)
		this->_type = src._type;
	std::cout << "WrongAnimal: Assignement copy constructor called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Default Destructor called." << std::endl;
}

/* -- Getters -- */
const std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

/* -- Setters -- */
void	WrongAnimal::setType(const std::string &type)
{
	this->_type = type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "make noises" << std::endl;
}