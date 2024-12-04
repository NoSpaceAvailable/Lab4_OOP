#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Cattle.h"
using namespace std;

class Sheep : public Cattle {
    private:
        int volumn;
    public:
        Sheep();
        void say() override;
        Sheep* breed(Sheep&);
        int give_milk() override;
        void feed() override;
        void makeHungry() override;
};

/**
 * Hàm tạo mặc định của lớp Sheep. Khởi tạo lượng sữa ngẫu nhiên trong khoảng 0-5
 */
Sheep::Sheep() {
    srand(time(NULL));
    this->volumn = rand() % 6;
}

/**
 * Hàm in ra tiếng kêu của Sheep
 */
void Sheep::say() {
    if (this->isHungry) cout << "Beeeeeeeeee\n";
}

/**
 * Hàm sinh sản của Sheep
 */
Sheep* Sheep::breed(Sheep& sheep) {
    return new Sheep();
}

/**
 * Hàm lấy sữa của Sheep
 */
int Sheep::give_milk() {
    return this->volumn;
}

/**
 * Hàm cho ăn Sheep
 */
void Sheep::feed() {
    this->isHungry = false;
}

/**
 * Hàm làm đói Sheep
 */
void Sheep::makeHungry() {
    this->isHungry = true;
}