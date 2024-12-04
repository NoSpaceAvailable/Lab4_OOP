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

/**
 * Constructor của lớp QuanLy
 * @param br tỉ lệ thưởng
 */
QuanLy::QuanLy(float br = 0) {
    this->bounty_rate = br;
}

/**
 * Hiển thị toàn bộ thông tin của quản lý
 */
void QuanLy::display() {
    cout << fixed << setprecision(2);
    cout << "Quản lý: " << this->name << endl;
    cout << "Mã nhân viên: " << this->mnv << endl;
    cout << "Lương cơ bản: " << this->base_salary << endl;
    cout << "Tỉ lệ thưởng: " << this->bounty_rate << '%' << endl;
    cout << "Thưởng: " << this->calculate_bounty() << endl;
}

/**
 * Nhập thông tin của quản lý gồm tên, mã nhân viên, lương cơ bản và tỉ lệ thưởng
 */
void QuanLy::input() {
    cout << "Nhập tên: ";
    getline(cin, this->name);
    cout << "Nhập mã nhân viên, lương cơ bản, tỉ lệ thưởng: ";
    cin >> this->mnv >> this->base_salary >> this->bounty_rate;
    cin.ignore(INT32_MAX, '\n');
}

/**
 * Tính thưởng của quản lý
 */
float QuanLy::calculate_bounty() {
    return this->base_salary * this->bounty_rate;
}