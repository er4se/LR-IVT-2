#include "Spot.h"

Spot* Spot::begin = nullptr;

Spot::Spot(const std::string& title) : Title(title), next(nullptr) {
	this->next = begin;
	begin = this;
}

Spot::~Spot() {
    if (begin == this) {
        begin = next;
    }
    else {
        Spot* current = begin;
        while (current && current->next != this) {
            current = current->next;
        }
        if (current) {
            current->next = this->next;
        }
    }
}

void Spot::Print() {
    Spot* current = begin;
    while (current) {
        current->Show();
        current = current->next;
    }
}