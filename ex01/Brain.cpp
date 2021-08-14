#include "Brain.hpp"

std::string Brain::getIdea( int index) const {
	if (index < 0 || index > 100)
		return "I have not idea\n";
	return this->ideas[index];
}

void Brain::setIdea( int index, std::string const &newIdea ) {
	if (index < 0 || index > 100) {
		std::cout << "I have not idea\n";
		return ;
	}
	ideas[index] = newIdea;
}

Brain::Brain() {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = i % 2 ? "eat" : "sleep";
}

Brain::Brain( Brain const &other ) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain::~Brain() {}

Brain &Brain::operator=( Brain const &other ) {
	if (this == &other)
		return *this;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return *this;
}