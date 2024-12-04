#pragma once
#include "Room.h"

using namespace std;

class Business : public Room {
    public:
        Business(int);
        int calculate_fee() override;
};

Business::Business(int days = 1) : Room(300000) {
    this->days = days;
}

int Business::calculate_fee() {
    return days * this->base_price;
}