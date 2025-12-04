#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(/* args */);
		Cure(std::string const & type);
		Cure(const Cure &copy);
		
		/* -- Overload Operator -- */
		Cure	&operator=(const Cure &src);
		
		/* -- Destructor -- */
		~Cure();

		/* -- Overrride pure virtual function -- */
		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};

#endif