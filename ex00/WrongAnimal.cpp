#include "WrongAnimal.hpp"

std::string WrongAnimal::getType() const { return this->type; }

void WrongAnimal::makeSound() const { std::cout << "Silence..." << std::endl; }

WrongAnimal::WrongAnimal() : type("Animal") { std::cout << "WrongAnimal reveals\n"; }

WrongAnimal::WrongAnimal( std::string const &type ) : type(type) { std::cout << "WrongAnimal reveals\n"; }

WrongAnimal::WrongAnimal( WrongAnimal const &other ) : type(other.type) { std::cout << "Copy WrongAnimal reveals\n"; }

WrongAnimal::~WrongAnimal() { std::cout << "WrongAnimal disappear\n"; }

WrongAnimal &WrongAnimal::operator=( WrongAnimal const &other ) {
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}
