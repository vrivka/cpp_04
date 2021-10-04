#include "AMateria.hpp"

std::string const &AMateria::getType() const { return this->Type; }

void AMateria::use( ICharacter & ) {}

AMateria::AMateria() : Type("void") {}

AMateria::AMateria( AMateria const &other ) : Type(other.Type) {}

AMateria::AMateria( std::string const &type ) : Type(type) {}

AMateria::~AMateria() {}

AMateria &AMateria::operator=( AMateria const & ) {
	return *this;
}
