#include "AMateria.hpp"

/* -- Constructors -- */
AMateria::AMateria() : _type("Default"), _equipped(false)
{

}

AMateria::AMateria(std::string const & type) : _type(type), _equipped(false)
{

}

AMateria::AMateria(const AMateria &copy) : _type(copy._type)
{

}

/* -- Overload Operator -- */
AMateria	&AMateria::operator=(const AMateria &src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

/* -- Destructor -- */
AMateria::~AMateria()
{

}

/* -- Setters -- */
void	AMateria::setEquipped(bool b)
{
	this->_equipped = b;
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

bool	AMateria::getEquipped() const
{
	return (this->_equipped);
}