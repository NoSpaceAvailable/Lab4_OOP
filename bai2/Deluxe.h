#pragma once
#include "Room.h"

using namespace std;

class Deluxe : public Room {
    private:
        int service_price;
        int service_charge;
    public:
        Deluxe(int, int, int);
        int calculate_fee() override;
};

Deluxe::Deluxe(int days = 1, int service_price = 0, int service_charge = 0) : Room(750000) {
    this->days = days;  
    this->service_price = service_price;
    this->service_charge = service_charge;
}

int Deluxe::calculate_fee() {
    return days * this->base_price + this->service_price + this->service_charge;
}