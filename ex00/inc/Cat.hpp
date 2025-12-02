#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

#define BLUE "\033[34m"
#define RESET "\033[0m"

class Cat : public Animal
{
	private:

	public:
		/* -- Constructors -- */
		Cat();

		Cat(std::string type);

		/* -- Copy Constructor -- */
		Cat(const Cat	&copy);

		/* -- Assignement operator -- */
		Cat& operator=(const Cat &src);

		/* -- Destructor -- */
		virtual ~Cat();

		virtual void	makeSound() const;
};


#endif