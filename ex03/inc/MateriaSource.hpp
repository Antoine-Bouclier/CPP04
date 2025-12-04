#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource
{
	public:
		/* -- Constructors -- */
		MateriaSource();
		MateriaSource(std::string const & type);
		MateriaSource(const MateriaSource &copy);
		
		/* -- Overload Operator -- */
		MateriaSource	&operator=(const MateriaSource &src);

		/* -- Destructors -- */
		~MateriaSource();

		/* -- Override pure virtual function -- */
		virtual void		learnMateria(AMateria*);
		virtual AMateria*	createMateria(std::string const & type);
};

#endif