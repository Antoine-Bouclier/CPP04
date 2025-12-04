#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat: Default Constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat	&copy)
{
	std::cout << "WrongCat: Copy Constructor called." << std::endl;
	*this = copy;
}
WrongCat& WrongCat::operator=(const WrongCat &src)
{
	if (this != &src)
		this->_type = src._type;
	std::cout << "WrongCat: Assignement copy constructor called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Default Destructor called." << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong Miaou Wrong Miaou" << std::endl;
}