#pragma once
#include <time.h>
#include <stdlib.h>
#define M true
#define F false

using namespace std;

/**
 * Base class của tất cả các loại gia súc
 */
class Cattle {
    protected:
        bool isHungry = false;
        bool gender;
    public:
        Cattle();
        virtual void say() = 0;
        Cattle* breed(Cattle&);
        virtual int give_milk() = 0;
        virtual void feed() = 0;
        virtual void makeHungry() = 0;
};

/**
 * Hàm tạo mặc định của lớp Cattle. Khởi tạo giới tính ngẫu nhiên
 */
Cattle::Cattle() {
    srand(time(NULL));
    int x = rand() % 2;
    this->gender = x == 1 ? M : F;
}