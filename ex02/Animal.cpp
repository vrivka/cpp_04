#include "Animal.hpp"

std::string Animal::getType() const { return this->type; }

Animal::Animal() : type("Animal") { std::cout << "Animal reveals\n"; }

Animal::Animal( std::string const &type ) : type(type) { std::cout << "Animal reveals\n"; }

Animal::Animal( Animal const &other ) : type(other.type) { std::cout << "Animal reveals\n"; }

Animal::~Animal() { std::cout << "Animal disappear\n"; }

Animal &Animal::operator=( Animal const &other ) {
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}
