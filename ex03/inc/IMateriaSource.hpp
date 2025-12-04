#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
private:
	/* data */
public:
	IMateriaSource(/* args */);
	virtual ~IMateriaSource();

	/* -- Pure virtual functions -- */
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};


#endif