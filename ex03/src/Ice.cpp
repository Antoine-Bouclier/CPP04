#include "Ice.hpp"

/* -- Constructors -- */
Ice::Ice()
{

}

Ice::Ice(std::string const & type)
{

}

Ice::Ice(const Ice &copy)
{
	
}
		
/* -- Overload Operator -- */
Ice	&Ice::operator=(const Ice &src)
{

}

Ice::Ice()
{

}

/* -- Destructor -- */
Ice::~Ice()
{

}

/* -- Override pure virtual function -- */
AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}
		
void		Ice::use(ICharacter& target)
{
	std::cout << BLUE "Ice: * shoots an ice bolt at " << target.getName() << std::endl;
}