#pragma once
#include <iostream>

using namespace std;

class NhanVien {
    protected:
        string mnv, name;
        int base_salary;
    public:
        virtual void display() = 0;
        virtual void input() = 0;
        virtual float calculate_bounty() = 0;
};