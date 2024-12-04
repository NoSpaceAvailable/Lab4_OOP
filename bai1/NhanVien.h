#pragma once
#include <iostream>

using namespace std;

/**
 * Base class NhanVien. Dùng để kế thừa cho các lớp con
 */
class NhanVien {
    protected:
        string mnv, name;
        int base_salary;
    public:
        virtual void display() = 0;
        virtual void input() = 0;
        virtual float calculate_bounty() = 0;
};