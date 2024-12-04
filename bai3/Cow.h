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

Cow::Cow() {
    srand(time(NULL));
    this->volumn = random() % 21;
}

void Cow::say() {
    if (this->isHungry) cout << "Moooooooooo\n";
}

Cow* Cow::breed(Cow& cow) {
    return new Cow();
}

int Cow::give_milk() {
    return this->volumn;
}

void Cow::feed() {
    this->isHungry = false;
}

void Cow::makeHungry() {
    this->isHungry = true;
}