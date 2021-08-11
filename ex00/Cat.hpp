#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
	virtual void makeSound() const;
	Cat();
	Cat( Cat const & );
	~Cat();
	Cat &operator=( Cat const & );
};


#endif
