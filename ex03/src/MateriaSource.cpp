#include "MateriaSource.hpp"

/* -- Constructors -- */
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (!copy._slots[i])
			this->_slots[i] = NULL;
		else
			this->_slots[i] = copy._slots[i]->clone();
	}
}

/* -- Overload Operator -- */
MateriaSource	&MateriaSource::operator=(const MateriaSource &src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_slots[i])
			{
				delete this->_slots[i];
				this->_slots[i] = NULL;
			}
			if (src._slots[i])
				this->_slots[i] = src._slots[i]->clone();
		}
	}
	return (*this);
}

/* -- Destructor -- */
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_slots[i])
			delete this->_slots[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_slots[i])
		{
			this->_slots[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_slots[i] && this->_slots[i]->getType() == type)
			return (this->_slots[i]->clone());
	}
	return (0);
}
