#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "Colors.hpp"

class Character
{
	private:
		std::string	_name;
		// inventory 4 slots => 4 Materias | init = empty

	public:
		/* -- Constructors -- */
		Character();
		Character(std::string name);
		Character(const Character &copy);
		Character&	operator=(const Character &src);

		/* -- Destructor -- */
		~Character();

};

#endif