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

Sheep::Sheep() {
    srand(time(NULL));
    this->volumn = rand() % 6;
}

void Sheep::say() {
    if (this->isHungry) cout << "Beeeeeeeeee\n";
}

Sheep* Sheep::breed(Sheep& sheep) {
    return new Sheep();
}

int Sheep::give_milk() {
    return this->volumn;
}

void Sheep::feed() {
    this->isHungry = false;
}

void Sheep::makeHungry() {
    this->isHungry = true;
}