#pragma once
#include <iomanip>
#include "NhanVien.h"

using namespace std;

class KySu : public NhanVien {
    private:
        float extended_time;
    public:
        KySu(float);
        void display() override;
        void input() override;
        float calculate_bounty() override;
};

KySu::KySu(float et = 0) {
    this->extended_time = et;
}

void KySu::display() {
    cout << fixed << setprecision(2);
    cout << "Kỹ sư: " << this->name << endl;
    cout << "Mã nhân viên: " << this->mnv << endl;
    cout << "Lương cơ bản: " << this->base_salary << endl;
    cout << "Số giờ làm thêm: " << this->extended_time << endl;
    cout << "Thưởng: " << this->calculate_bounty() << endl;
}

void KySu::input() {
    cout << "Nhập tên: ";
    getline(cin, this->name);
    cout << "Nhập mã nhân viên, lương cơ bản, số giờ làm thêm: ";
    cin >> this->mnv >> this->base_salary >> this->extended_time;
}

float KySu::calculate_bounty() {
    return this->extended_time * 100000;
}