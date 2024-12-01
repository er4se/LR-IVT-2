#ifndef REGION_H
#define REGION_H

#include "Spot.h"

class Region : public Spot {
	std::string value;

public:
	Region(const std::string& title, std::string& value);
	void Show() const override;
};

#endif
