#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "iostream"

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		/* -- Constructors -- */
		WrongAnimal();
		WrongAnimal(std::string type);

		/* -- Copy Constructor -- */
		WrongAnimal(const WrongAnimal	&copy);

		/* -- Assignement operator -- */
		WrongAnimal& operator=(const WrongAnimal &src);

		/* -- Destructor -- */
		virtual ~WrongAnimal();

		/* -- Getters -- */
		const std::string	getType() const;

		void	makeSound() const;
};

#endif