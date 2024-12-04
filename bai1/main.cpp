#include "KySu.h"
#include "QuanLy.h"
#include <iostream>

using namespace std;

/**
 * Hàm main khởi tạo một kỹ sư và một quản lý, nhập thông tin và hiển thị thông tin của họ
 */
int main() {
    KySu ks;
    QuanLy ql;
    ql.input();
    ks.input();
    ql.display();
    ks.display();
}