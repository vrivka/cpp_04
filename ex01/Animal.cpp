#include "Animal.hpp"

std::string Animal::getType() const {
	return this->type;
}

void Animal::makeSound() const {
	std::cout << "Silence..." << std::endl;
}

Animal::Animal() : type("Animal") {
	std::cout << "Animal reveals\n";
}

Animal::Animal( std::string const &type ) : type(type) {
	std::cout << "Animal reveals\n";
}

Animal::Animal( Animal const &other ) : type(other.type) {
	std::cout << "Animal reveals\n";
}

Animal::~Animal() {
	std::cout << "Animal disappear\n";
}

Animal &Animal::operator=( Animal const &other ) {
	this->type = other.type;
	return *this;
}
