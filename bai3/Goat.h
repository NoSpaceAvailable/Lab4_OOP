#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Cattle.h"
using namespace std;

class Goat : public Cattle {
    private:
        int volumn;
    public:
        Goat();
        void say() override;
        Goat* breed(Goat&);
        int give_milk() override;
        void feed() override;
        void makeHungry() override;
};

/**
 * Hàm tạo mặc định của lớp Goat. Khởi tạo lượng sữa ngẫu nhiên trong khoảng 0-10
 */
Goat::Goat() {
    srand(time(NULL));
    this->volumn = rand() % 11;
}

/**
 * Hàm in ra tiếng kêu của Goat
 */
void Goat::say() {
    if (this->isHungry) cout << "Meeeeeeeeee\n";
}

/**
 * Hàm sinh sản của Goat
 */
Goat* Goat::breed(Goat& goat) {
    return new Goat();
}

/**
 * Hàm lấy sữa của Goat
 */
int Goat::give_milk() {
    return this->volumn;
}

/**
 * Hàm cho ăn Goat
 */
void Goat::feed() {
    this->isHungry = false;
}

/**
 * Hàm làm đói Goat
 */
void Goat::makeHungry() {
    this->isHungry = true;
}