#include "Ice.hpp"

AMateria *Ice::clone() const {
	AMateria *ice = new Ice();
	return ice;
}

void Ice::use( ICharacter &target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice constructor\n";
}

Ice::Ice( Ice const &other ) {
	std::cout << "Ice copy constructor\n";
	*this = other;
}

Ice::~Ice() {
	std::cout << "Ice destructor\n";
}

Ice &Ice::operator=( Ice const &other ) {
	return *this;
}
