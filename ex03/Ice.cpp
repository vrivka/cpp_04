#include "Ice.hpp"

AMateria *Ice::clone() const { return new Ice(); }

void Ice::use( ICharacter &target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::Ice() : AMateria("ice") {}

Ice::Ice( Ice const &other ) : AMateria(other.Type) {}

Ice::~Ice() {}

Ice &Ice::operator=( Ice const & ) {
	return *this;
}
