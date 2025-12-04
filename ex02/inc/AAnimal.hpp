#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include "iostream"

#define GREEN "\033[32m"
#define RESET "\033[0m"

class AAnimal
{
	protected:
		std::string	_type;
	public:
		/* -- Constructors -- */
		AAnimal();
		AAnimal(std::string type);

		/* -- Copy Constructor -- */
		AAnimal(const AAnimal	&copy);

		/* -- Assignement operator -- */
		AAnimal& operator=(const AAnimal &src);

		/* -- Destructor -- */
		virtual ~AAnimal();

		/* -- Getters -- */
		const std::string	getType() const;

		virtual void	makeSound() const = 0;
};

#endif