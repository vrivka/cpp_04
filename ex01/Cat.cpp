#include "Cat.hpp"

void Cat::makeSound() const { std::cout << this->type << " says MEOW\n"; }

std::string Cat::getIdea( int index) const { return this->brain->getIdea(index); }

void Cat::setIdea( int index, std::string const &idea ) { this->brain->setIdea(index, idea); }

Cat::Cat() : Animal("Cat"), brain(new Brain()) { std::cout << "Cat reveals\n"; }

Cat::Cat( Cat const &other ) : Animal(other), brain(new Brain()) {
	std::cout << "Copy Cat reveals\n";
	for (int i = 0; i < 100; i++)
		this->brain->setIdea(i, other.brain->getIdea(i));
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "Cat disappear\n";
}

Cat &Cat::operator=( Cat const &other ) {
	if (this == &other)
		return *this;
	for (int i = 0; i < 100; i++)
		this->brain->setIdea(i, other.brain->getIdea(i));
	this->type = other.type;
	return *this;
}
