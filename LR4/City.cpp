#include "City.h"

City::City(const std::string& title, std::string& value)
	: Spot(title), value(value) {}

void City::Show() const {
	std::cout << "Spot type: " << Title << ", information value: " << value << std::endl;
}