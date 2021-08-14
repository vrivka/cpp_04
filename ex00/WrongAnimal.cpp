#include "WrongAnimal.hpp"

std::string WrongAnimal::getType() const {
	return this->type;
}

void WrongAnimal::makeSound() const {
	std::cout << "Silence..." << std::endl;
}

WrongAnimal::WrongAnimal() : type("Animal") {}

WrongAnimal::WrongAnimal( std::string const &type ) : type(type) {}

WrongAnimal::WrongAnimal( WrongAnimal const &other ) : type(other.type) {}

WrongAnimal::~WrongAnimal() {}

WrongAnimal &WrongAnimal::operator=( WrongAnimal const &other ) {
	this->type = other.type;
	return *this;
}
