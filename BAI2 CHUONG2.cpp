// Có 3 loại ghế ngồi trên một sân vận động. Với một môn bóng, các ghế hạng A với giá 15 đô la, các ghế hạng B có giá 12 đô la, và các ghế hạng C có giá là 9 đô la. 
// Viết chương trình yêu cầu người dùng nhập số lượng vé cho mỗi hạng ghế và hiển thị tổng số tiền thu được từ các vé được bán ra. 
// Hãy định dạng số tiền ở dạng kí hiệu fixed-point, với độ chính xác 2 số thập phân đằng sau dấu phẩy, và luôn hiển thị dấu phẩy thập phân trong mọi trường hợp. 

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b, c;
    const double priceA = 15.0;
    const double priceB = 12.0;
    const double priceC = 9.0;

    cout << "So ve hang A: ";
    cin >> a;
    cout << "So ve hang B: ";
    cin >> b;
    cout << "So ve hang C: ";
    cin >> c;

    double total = a * priceA + b * priceB + c * priceC;

    cout << fixed << setprecision(2);
    cout << "Tong doanh thu: $" << total << endl;

    return 0;
}