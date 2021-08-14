#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
	Brain *brain;
public:
	virtual void makeSound() const;
	std::string getIdea( int ) const;
	void setIdea( int, std::string const & );
	Dog();
	Dog( Dog const & );
	virtual ~Dog();
	Dog &operator=( Dog const & );
};


#endif
