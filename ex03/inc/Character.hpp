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
	public:
		/* -- Constructors -- */
		Character();
		Character(std::string name);
		Character(const Character &copy);
		Character&	operator=(const Character &src);

		/* -- Destructor -- */
		~Character();

		/* -- Override pure virtual function -- */
		virtual std::string const & getName() const;
		virtual void	equip(AMateria* m);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter& target);
};

#endif