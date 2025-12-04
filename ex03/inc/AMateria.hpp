#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string const & _type;
	public:
		/* -- Constructors -- */
		AMateria(/* args */);
		AMateria(std::string const & type);

		/* -- Destructor -- */
		~AMateria();

		/* Getters */
		std::string const & getType() const; //Returns the materia type

		/* Pure virtual function */
		virtual AMateria	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif