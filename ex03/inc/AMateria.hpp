#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "Colors.hpp"

class AMateria
{
	protected:
		std::string _type;
		bool		_equipped;
	public:
		/* -- Constructors -- */
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria &copy);
		
		/* -- Overload Operator -- */
		AMateria	&operator=(const AMateria &src);

		/* -- Destructor -- */
		virtual ~AMateria();

		/* -- Setters -- */
		void	setEquipped(bool b);

		/* -- Getters -- */
		std::string const &	getType() const;
		bool				getEquipped() const;

		/* Pure virtual function */
		virtual AMateria*	clone() const = 0;

		/* -- Override pure virtual function -- */
		virtual void		use(ICharacter& target);
};

#endif