#include "AMateria.hpp"

/* -- Constructors -- */
AMateria::AMateria() : _type("Default")
{

}

AMateria::AMateria(std::string const & type) : _type(type)
{

}

AMateria::AMateria(const AMateria &copy) : _type(copy._type)
{

}

/* -- Overload Operator -- */
AMateria	&AMateria::operator=(const AMateria &src)
{
	(void)src;
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

void		AMateria::use(ICharacter& target)
{
	(void)target;
}
