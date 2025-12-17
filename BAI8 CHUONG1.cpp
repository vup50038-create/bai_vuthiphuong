// Một khách hàng trong một cửa hàng mua 5 món đồ. Giá của các món đồ như sau: 
// − Giá của món đồ thứ nhất = 15.59 đô la 
// − Giá của món đồ thứ hai = 24.59 đô la 
// − Giá của món đồ thứ ba = 6.59 đô la 
// − Giá của món đồ thứ tư = 12.59 đô la 
// − Giá của món đồ thứ năm = 3.59 đô la 
// Viết một chương trình lưu giữ giá của năm món đồ này trong năm biến. Hiển thị giá của mỗi món đồ, tổng tạm tính của giỏ hàng, số tiền thuế, và tổng phải trả. 
// Giả sử thuế bán hàng là 7 phần trăm. 

#include <iostream>
using namespace std;

int main() {
    double i1 = 15.59, i2 = 24.59, i3 = 6.59, i4 = 12.59, i5 = 3.59;
    double subTotal = i1 + i2 + i3 + i4 + i5;
    double tax = subTotal * 0.07;
    double total = subTotal + tax;

    cout << "Tam tinh: " << subTotal << endl;
    cout << "Thue: " << tax << endl;
    cout << "Tong phai tra: " << total << endl;

    return 0;
}