#ifndef CPP_04_CHARACTER_HPP
#define CPP_04_CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

class Character : public ICharacter {
private:
	std::string const Name;
	AMateria *inventorySlot[4];
public:
	virtual std::string const &getName() const;
	virtual void equip( AMateria * );
	virtual void unequip( int );
	virtual void use( int, ICharacter & );
	Character();
	Character( std::string const & );
	Character( Character const & );
	Character &operator=( Character const & );
	virtual ~Character();
};


#endif
