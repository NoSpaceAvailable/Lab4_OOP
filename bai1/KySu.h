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

/**
 * Constructor của KySu
 * @param et số giờ làm thêm
 */
KySu::KySu(float et = 0) {
    this->extended_time = et;
}

/**
 * Hiển thị toàn bộ thông tin của kỹ sư
 */
void KySu::display() {
    cout << fixed << setprecision(2);
    cout << "Kỹ sư: " << this->name << endl;
    cout << "Mã nhân viên: " << this->mnv << endl;
    cout << "Lương cơ bản: " << this->base_salary << endl;
    cout << "Số giờ làm thêm: " << this->extended_time << endl;
    cout << "Thưởng: " << this->calculate_bounty() << endl;
}

/**
 * Nhập thông tin của kỹ sư gồm tên, mã nhân viên, lương cơ bản, số giờ làm thêm
 */
void KySu::input() {
    cout << "Nhập tên: ";
    getline(cin, this->name);
    cout << "Nhập mã nhân viên, lương cơ bản, số giờ làm thêm: ";
    cin >> this->mnv >> this->base_salary >> this->extended_time;
}

/**
 * Tính thưởng của kỹ sư
 */
float KySu::calculate_bounty() {
    return this->extended_time * 100000;
}