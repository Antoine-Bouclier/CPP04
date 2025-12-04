#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(/* args */);
		Ice(std::string const & type);
		Ice(const Ice &copy);
		
		/* -- Overload Operator -- */
		Ice	&operator=(const Ice &src);
		
		/* -- Destructor -- */
		~Ice();

		/* -- Overrride pure virtual function -- */
		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};

#endif