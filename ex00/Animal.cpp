#include "Animal.hpp"

std::string Animal::getType() const {
	return this->type;
}

void Animal::makeSound() const {
	std::cout << "Silence..." << std::endl;
}

Animal::Animal() : type("Animal") {}

Animal::Animal( Animal const &other ) {
	*this = other;
}

Animal::~Animal() {}

Animal &Animal::operator=( Animal const &other ) {
	this->type = other.type;
	return *this;
}

