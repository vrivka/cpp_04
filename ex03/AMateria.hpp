#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria {
protected:
	std::string const Type;
public:
	std::string const &getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use( ICharacter & );
	AMateria();
	AMateria( AMateria const & );
	AMateria( std::string const & );
	virtual ~AMateria();
	AMateria &operator=( AMateria const & );
};

#endif
