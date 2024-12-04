#include "Premium.h"
#include "Deluxe.h"
#include "Business.h"
#include <iostream>

using namespace std;

/**
 * Hàm main khởi tạo 5 loại phòng và tính doanh thu của từng loại phòng
 * Sau đó so sánh doanh thu của từng loại phòng để xác định loại phòng có doanh thu cao nhất
 */
int main() {
    Deluxe a(5, 100000, 50000);
    Business b(5);
    Premium c(5, 100000);
    Deluxe d(2, 200000, 100000);
    Premium e(2, 200000);

    Room* rooms[] = {&a, &b, &c, &d, &e};

    int Business_count = 0;
    int Deluxe_count = 0;
    int Premium_count = 0;

    for (Room* room : rooms) {
        if (dynamic_cast<Business*>(room)) {
            Business_count += room->calculate_fee();
        } else if (dynamic_cast<Deluxe*>(room)) {
            Deluxe_count += room->calculate_fee();
        } else if (dynamic_cast<Premium*>(room)) {
            Premium_count += room->calculate_fee();
        }
    }

    cout << "Loại phòng có doanh thu cao nhất: ";
    if (Business_count > Deluxe_count && Business_count > Premium_count) {
        cout << "Business, " << Business_count << endl;
    } else if (Deluxe_count > Business_count && Deluxe_count > Premium_count) {
        cout << "Deluxe, " << Deluxe_count << endl;
    } else {
        cout << "Premium, " << Premium_count << endl;
    }
}