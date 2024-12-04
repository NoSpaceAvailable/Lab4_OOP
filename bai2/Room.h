#pragma once

using namespace std;

/**
 * Base class Room, dùng cho mục đích kế thừa
 */
class Room {
    protected:
        int base_price;
        int days;
    public:
        Room();
        Room(int);
        virtual int calculate_fee() = 0;
};

/**
 * Constructor mặc định, khởi tạo giá cơ bản là 300000
 */
Room::Room() {
    this->base_price = 300000;
}

/**
 * Constructor với tham số
 * @param bp: giá cơ bản
 */
Room::Room(int bp) {
    this->base_price = bp;
}