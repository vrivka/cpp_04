#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Ice : public AMateria {
public:
	virtual AMateria* clone() const;
	virtual void use( ICharacter & );
	Ice();
	Ice( Ice const & );
	virtual ~Ice();
	Ice &operator=( Ice const & );
};

#endif
