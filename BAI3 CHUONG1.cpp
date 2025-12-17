// Viết một chương trình tính tổng thuế bán hàng trên một giỏ hàng 95 đô. Giả sử thuế bán hàng của một tiểu bang là 4 phần trăm, và thuế bán hàng của quận là 2 phần trăm. 
#include <iostream>
using namespace std;

int main() {
    double price = 95;
    double stateTax = price * 0.04;
    double countyTax = price * 0.02;
    double totalTax = stateTax + countyTax;
    double totalPrice = price + totalTax;

    cout << "Gia hang: " << price << endl;
    cout << "Thue tieu bang: " << stateTax << endl;
    cout << "Thue quan: " << countyTax << endl;
    cout << "Tong tien: " << totalPrice << endl;

    return 0;
}