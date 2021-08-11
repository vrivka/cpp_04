#include "Cure.hpp"

AMateria *Cure::clone() const {
	AMateria *ice = new Cure();
	return ice;
}

void Cure::use( ICharacter &target ) {
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure consructor\n";
}

Cure::Cure( Cure const &other ) {
	std::cout << "Cure copy consructor\n";
	*this = other;
}

Cure::~Cure() {
	std::cout << "Cure destructor\n";
}

Cure &Cure::operator=( Cure const &other ) {
	return *this;
}
