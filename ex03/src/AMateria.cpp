#include "AMateria.hpp"

/* -- Constructors -- */
AMateria::AMateria() : _type("Default")
{
	std::cout << GREEN "AMateria: Default constructor called." RESET << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << GREEN "AMateria: Parameterized Constructor called." RESET << std::endl;
}

AMateria::AMateria(const AMateria &copy) : _type(copy._type)
{
	std::cout << GREEN "AMateria: Copy Constructor called." RESET << std::endl;
}

/* -- Overload Operator -- */
AMateria	&AMateria::operator=(const AMateria &src)
{
	return (*this);
}

/* -- Destructor -- */
AMateria::~AMateria()
{

}

/* Getters */
std::string const & AMateria::getType() const
{
	return (this->_type);
}

void		use(ICharacter& target)
{
	
}
