#include "Brain.hpp"

std::string Brain::getIdea( int index) const {
	return this->ideas[index];
}

Brain::Brain() {
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "eat";
		i++;
		this->ideas[i] = "sleep";
	}
}

Brain::Brain( Brain const &other ) {
	*this = other;
}

Brain::~Brain() {}

Brain &Brain::operator=( Brain const &other ) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return *this;
}