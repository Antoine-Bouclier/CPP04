#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

#define BLUE "\033[34m"
#define RESET "\033[0m"

class WrongCat : public WrongAnimal
{
	private:

	public:
		/* -- Constructors -- */
		WrongCat();

		WrongCat(std::string type);

		/* -- Copy Constructor -- */
		WrongCat(const WrongCat	&copy);

		/* -- Assignement operator -- */
		WrongCat& operator=(const WrongCat &src);

		/* -- Destructor -- */
		virtual ~WrongCat();

		void	makeSound() const;
};


#endif