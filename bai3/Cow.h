#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Cattle.h"
using namespace std;

class Cow : public Cattle {
    private:
        int volumn;
    public:
        Cow();
        void say() override;
        Cow* breed(Cow&);
        int give_milk() override;
        void feed() override;
        void makeHungry() override;
};

/**
 * Hàm tạo mặc định của lớp Cow. Khởi tạo lượng sữa ngẫu nhiên trong khoảng 0-20
 */
Cow::Cow() {
    srand(time(NULL));
    this->volumn = random() % 21;
}

/**
 * Hàm in ra tiếng kêu của Cow
 */
void Cow::say() {
    if (this->isHungry) cout << "Moooooooooo\n";
}

/**
 * Hàm sinh sản của Cow
 */
Cow* Cow::breed(Cow& cow) {
    return new Cow();
}

/**
 * Hàm lấy sữa của Cow
 */
int Cow::give_milk() {
    return this->volumn;
}

/**
 * Hàm cho ăn Cow
 */
void Cow::feed() {
    this->isHungry = false;
}

/**
 * Hàm làm đói Cow
 */
void Cow::makeHungry() {
    this->isHungry = true;
}