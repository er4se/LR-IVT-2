#ifndef CITY_H
#define CITY_H

#include "Spot.h"

class City : public Spot {
	std::string value;

public:
	City(const std::string& title, std::string& value);
	void Show() const override;
};

#endif
