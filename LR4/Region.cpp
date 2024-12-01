#include "Region.h"

Region::Region(const std::string& title, std::string& value)
	: Spot(title), value(value) {}

void Region::Show() const {
	std::cout << "Spot type: " << Title << ", information value: " << value << std::endl;
}