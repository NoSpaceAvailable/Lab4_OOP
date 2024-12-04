#pragma once
#include "Room.h"

using namespace std;

class Business : public Room {
    public:
        Business(int);
        int calculate_fee() override;
};

/**
 * Constructor của Business, khởi tạo số ngày thuê phòng và giá phòng cơ bản
 */
Business::Business(int days = 1) : Room(300000) {
    this->days = days;
}

/**
 * Tính tiền phòng
 */
int Business::calculate_fee() {
    return days * this->base_price;
}