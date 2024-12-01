#ifndef SPOT_H
#define SPOT_H

#include <iostream>
#include <string>

class Spot {
protected:
	std::string Title;

	static Spot* begin;
	Spot* next;

public:
	Spot(const std::string& title);
	virtual ~Spot();

	static void Print();
	virtual void Show() const = 0;
};

#endif