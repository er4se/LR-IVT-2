#include "Metropolis.h"

Metropolis::Metropolis(const std::string& title, std::string& value)
	: Spot(title), value(value) {}

void Metropolis::Show() const {
	std::cout << "Spot type: " << Title << ", information value: " << value << std::endl;
}