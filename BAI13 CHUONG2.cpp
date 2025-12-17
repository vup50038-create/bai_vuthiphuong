// Viết chương trình chuyển đổi giá trị của U.S. dollar sang Japanese yen và euros, lưu trữ hệ số chuyển đổi trong các hằng số YEN_PER_DOLLAR và 
// EUROS_PER_DOLLAR. Để có được tỉ lệ chuyển đổi được cập nhật, hãy tìm trên Internet với từ khóa “currency exchange rate”. 
// Nếu bạn không thể tìm được tỉ lệ chuyển đổi trong thời gian gần đây nhất thì có thể sử dụng tỉ lệ sau: 
// − 1 Dollar = 98.93 Yen 
// − 1 Dollar = 0.74 Euros 
// Hãy định dạng kết quả ở dạng kí hiệu fixed-point, với độ chính xác 2 số đằng sau dấu phẩy, và luôn để dấu phẩy th
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double YEN_PER_DOLLAR = 98.93;
    const double EURO_PER_DOLLAR = 0.74;

    double dollars;
    cout << "Nhap so tien Dollar: ";
    cin >> dollars;

    cout << fixed << setprecision(2);
    cout << "Yen: " << dollars * YEN_PER_DOLLAR << endl;
    cout << "Euro: " << dollars * EURO_PER_DOLLAR << endl;

    return 0;
}

