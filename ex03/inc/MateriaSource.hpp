#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource
{
	private:
		AMateria*	_slots[4];
	public:
		/* -- Constructors -- */
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		
		/* -- Overload Operator -- */
		MateriaSource	&operator=(const MateriaSource &src);

		/* -- Destructors -- */
		~MateriaSource();

		/* -- Override pure virtual function -- */
		virtual void		learnMateria(AMateria* m);
		virtual AMateria*	createMateria(std::string const & type);
};

#endif