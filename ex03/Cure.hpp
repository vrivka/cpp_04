#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria {
public:
	virtual AMateria* clone() const;
	virtual void use( ICharacter & );
	Cure();
	Cure( Cure const & );
	virtual ~Cure();
	Cure &operator=( Cure const & );
};

#endif
