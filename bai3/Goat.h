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

Goat::Goat() {
    srand(time(NULL));
    this->volumn = rand() % 11;
}

void Goat::say() {
    if (this->isHungry) cout << "Meeeeeeeeee\n";
}

Goat* Goat::breed(Goat& goat) {
    return new Goat();
}

int Goat::give_milk() {
    return this->volumn;
}

void Goat::feed() {
    this->isHungry = false;
}

void Goat::makeHungry() {
    this->isHungry = true;
}