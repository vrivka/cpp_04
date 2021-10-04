#include "WrongCat.hpp"

void WrongCat::makeSound() const { std::cout << this->type << " says MOEW?\n"; }

WrongCat::WrongCat() : WrongAnimal("Cat") { std::cout << "WrongCat reveals\n"; }

WrongCat::WrongCat( WrongCat const &other ) : WrongAnimal(other) { std::cout << "Copy WrongCat reveals\n"; }

WrongCat::~WrongCat() { std::cout << "WrongCat disappear\n"; }

WrongCat &WrongCat::operator=( WrongCat const &other ) {
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}