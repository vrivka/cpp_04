#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
	virtual void makeSound() const;
	Dog();
	Dog( Dog const & );
	~Dog();
	Dog &operator=( Dog const & );
};


#endif
