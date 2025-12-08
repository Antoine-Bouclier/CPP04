#include "Character.hpp"

Character::Character() : _name("Default"), _floorCount(0)
{
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
	for (int i = 0; i < 100; i++)
		this->_floor[i] = NULL;
}

Character::Character(std::string name) : _name(name), _floorCount(0)
{
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
	for (int i = 0; i < 100; i++)
		this->_floor[i] = NULL;
}

Character::Character(const Character &copy)
{
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		if (!copy._slots[i])
			this->_slots[i] = NULL;
		else
			this->_slots[i] = copy._slots[i]->clone();
	}
}

Character& Character::operator=(const Character &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		for (int i = 0; i < 4; i++)
		{
			if (this->_slots[i])
			delete	_slots[i];
			if (src._slots[i])
			this->_slots[i] = src._slots[i]->clone();
			else
			this->_slots[i] = NULL;
		}
		for (int i = 0; i < this->_floorCount; i++)
		{
			if (this->_floor[i])
				delete	this->_floor[i];
			this->_floor[i] = NULL;
		}
		this->_floorCount = src._floorCount;
		for (int i = 0; i < src._floorCount; i++)
		{
			this->_floor[i] = src._floor[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i= 0; i < 4; i++)
	{
		if (this->_slots[i])
			delete this->_slots[i];
	}
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
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

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || !this->_slots[idx])
	{
		std::cout << this->_name << "have no materia at the index " << idx << std::endl;
	}
	else
	{
		if (this->_floorCount < 100)
		{
			std::cout << this->_name << ": remove from his inventory " << this->_slots[idx]->getType() << std::endl;
			this->_floor[this->_floorCount] = this->
_slots[idx];
			this->_floorCount++;
			this->_slots[idx] = NULL;
		}
		else
			std::cout << "no more place on the floor." << std::endl;
	}

}

void	Character::use(int idx, ICharacter& target)
{
	if (this->_slots[idx])
	{
		this->_slots[idx]->use(target);
		return ;
	}
}

/* -- Getters -- */
AMateria* const*	Character::getFloor() const
{
	return (this->_floor);
}

int	Character::getFloorCount() const
{
	return (this->_floorCount);
}