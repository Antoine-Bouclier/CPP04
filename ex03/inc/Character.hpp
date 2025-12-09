#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Colors.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria*	_slots[4];
		AMateria*	_floor[100];
		int			_floorCount;
	public:
		/* -- Constructors -- */
		Character();
		Character(std::string name);
		Character(const Character &copy);
		Character&	operator=(const Character &src);

		/* -- Destructor -- */
		~Character();

		/* Getters */
		AMateria* const*	getFloor() const;
		AMateria* const*	getSlots() const;
		int					getFloorCount() const;

		/* -- Override pure virtual function -- */
		virtual std::string const & getName() const;
		virtual void	equip(AMateria* m);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter& target);
};

#endif