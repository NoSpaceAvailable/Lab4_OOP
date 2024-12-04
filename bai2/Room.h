#pragma once

using namespace std;

class Room {
    protected:
        int base_price;
        int days;
    public:
        Room();
        Room(int);
        virtual int calculate_fee() = 0;
};

Room::Room() {
    this->base_price = 300000;
}

Room::Room(int bp) {
    this->base_price = bp;
}