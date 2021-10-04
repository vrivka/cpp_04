#include "Cure.hpp"

AMateria *Cure::clone() const { return new Cure(); }

void Cure::use( ICharacter &target ) {
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

Cure::Cure() : AMateria("cure") {}

Cure::Cure( Cure const &other ) : AMateria(other.Type) {}

Cure::~Cure() {}

Cure &Cure::operator=( Cure const & ) {
	return *this;
}
