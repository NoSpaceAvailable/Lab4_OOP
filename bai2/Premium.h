#pragma once
#include "Room.h"

using namespace std;

class Premium : public Room {
    private:
        int service_price;
    public:
        Premium(int, int);
        int calculate_fee() override;
};

/**
 * Constructor của Premium, khởi tạo số ngày thuê phòng, giá phòng cơ bản và giá dịch vụ
 */
Premium::Premium(int days = 1, int service_price = 0) : Room(500000) {
    this->days = days;
    this->service_price = service_price;
}

/**
 * Tính tiền phòng
 */
int Premium::calculate_fee() {
    return days * this->base_price + this->service_price;
}