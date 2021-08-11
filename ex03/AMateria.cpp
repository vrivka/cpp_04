#include "AMateria.hpp"

std::string const &AMateria::getType() const {
	return this->Type;
}

void AMateria::use( ICharacter &target ) {}

AMateria::AMateria() : Type("void") {
	std::cout << "AMateria constructor\n";
}

AMateria::AMateria( AMateria const &other ) {
	std::cout << "AMateria copy constructorS\n";
	*this = other;
	std::cout << "AMateria copy constructorF\n";
}

AMateria::AMateria( std::string const &type ) : Type(type) {
	std::cout << "AMateria type constructor\n";
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor\n";
}

AMateria &AMateria::operator=( AMateria const &other ) {
	return *this;
}
