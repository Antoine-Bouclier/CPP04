#include "Ice.hpp"

/* -- Constructors -- */
Ice::Ice() : AMateria("ice")
{
	 std::cout << "Ice default constructor\n";
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	std::cout << "Ice copy constructor\n";
}
		
/* -- Overload Operator -- */
Ice	&Ice::operator=(const Ice &src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
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
	std::cout << BLUE "* shoots an ice bolt at " << target.getName() << " *" RESET<< std::endl;
}