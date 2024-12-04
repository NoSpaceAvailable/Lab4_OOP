#pragma once
#include <iomanip>
#include "NhanVien.h"

using namespace std;

class QuanLy : public NhanVien {
    private:
        float bounty_rate;
    public:
        QuanLy(float);
        void display() override;
        void input() override;
        float calculate_bounty() override;
};

QuanLy::QuanLy(float br = 0) {
    this->bounty_rate = br;
}

void QuanLy::display() {
    cout << fixed << setprecision(2);
    cout << "Quản lý: " << this->name << endl;
    cout << "Mã nhân viên: " << this->mnv << endl;
    cout << "Lương cơ bản: " << this->base_salary << endl;
    cout << "Tỉ lệ thưởng: " << this->bounty_rate << '%' << endl;
    cout << "Thưởng: " << this->calculate_bounty() << endl;
}

void QuanLy::input() {
    cout << "Nhập tên: ";
    getline(cin, this->name);
    cout << "Nhập mã nhân viên, lương cơ bản, tỉ lệ thưởng: ";
    cin >> this->mnv >> this->base_salary >> this->bounty_rate;
    cin.ignore(INT32_MAX, '\n');
}

float QuanLy::calculate_bounty() {
    return this->base_salary * this->bounty_rate;
}