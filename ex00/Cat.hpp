#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
	virtual void makeSound() const;
	Cat();
	Cat( Cat const & );
	virtual ~Cat();
	Cat &operator=( Cat const & );
};


#endif
