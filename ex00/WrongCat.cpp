#include "WrongCat.hpp"

void WrongCat::makeSound() const {
	std::cout << this->type << " says MOEW?" << std::endl;
}

WrongCat::WrongCat() : WrongAnimal("Cat") {}

WrongCat::WrongCat( WrongCat const &other ) : WrongAnimal(other) {}

WrongCat::~WrongCat() {}

WrongCat &WrongCat::operator=( WrongCat const &other ) {
	this->type = other.type;
	return *this;
}