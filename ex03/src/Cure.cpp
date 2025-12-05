#include "Cure.hpp"

/* -- Constructors -- */
Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &copy)
{
	this->_type = copy._type;
}
		
/* -- Overload Operator -- */
Cure	&Cure::operator=(const Cure &src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

/* -- Destructor -- */
Cure::~Cure()
{
}

/* -- Override pure virtual function -- */
AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}
		
void		Cure::use(ICharacter& target)
{
	std::cout << RED "* heals " << target.getName() << "'s wounds *"  RESET << std::endl;
}