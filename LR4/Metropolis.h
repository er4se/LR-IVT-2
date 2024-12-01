#ifndef METROPOLIS_H
#define METROPOLIS_H

#include "Spot.h"

class Metropolis : public Spot {
	std::string value;

public:
	Metropolis(const std::string& title, std::string& value);
	void Show() const override;
};

#endif
