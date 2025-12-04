#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Default")
{
	std::cout << GREEN "AAnimal: Default Constructor called." RESET << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << GREEN "AAnimal: Parameterized Constructor called." RESET << std::endl;
}
AAnimal::AAnimal(const AAnimal	&copy)
{
	std::cout << GREEN "AAnimal: Copy Constructor called." RESET << std::endl;
	*this = copy;
}
AAnimal& AAnimal::operator=(const AAnimal &src)
{
	if (this != &src)
		this->_type = src._type;
	std::cout << GREEN "AAnimal: Assignement copy constructor called" RESET << std::endl;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << GREEN "AAnimal: Default Destructor called." RESET << std::endl;
}

/* -- Getters -- */
const std::string	AAnimal::getType() const
{
	return (this->_type);
}