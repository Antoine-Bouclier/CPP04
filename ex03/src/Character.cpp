#include "Character.hpp"

Character::Character()
{
	std::cout << RED "Character: Default Constructor called." RESET << std::endl;
}

Character::Character(std::string name)
{

}

Character::Character(const Character	&copy)
{
	std::cout << RED "Character: Copy Constructor called." RESET << std::endl;
}

Character& Character::operator=(const Character &src)
{
	if (this != &src)
	{
		
	}
	std::cout << RED "Character: Assignement copy constructor called" RESET << std::endl;
	return (*this);
}

Character::~Character()
{
	std::cout << RED "Character: Default Destructor called." RESET << std::endl;
}