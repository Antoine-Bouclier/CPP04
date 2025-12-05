#include "Character.hpp"

Character::Character() : _name("Default")
{
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
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
		for (int i = 0; i < 4; i++)
			this->_slots[i] = src._slots[i]->clone();
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
		std::cout << this->_name << ": remove from his inventory " << this->_slots[idx]->getType() << std::endl;
		this->_slots[idx] = NULL;
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