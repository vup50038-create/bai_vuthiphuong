// Viết một chương trình tính thuế và tip trên một hóa đơn nhà hàng cho vị khách quen với số tiền phải trả cho bữa ăn là 88.67 đô.Thuế là 6.75 phần trăm chi phí bữa ăn. Tiền tip là 20 phần trăm tổng tiền sau khi cộng thêm thuế. Hiển thị chi phí bữa ăn, số tiền thuế, số tiền tip, và tổng hóa đơn ra màn hình. 
#include <iostream>
using namespace std;

int main() {
    double meal = 88.67;
    double tax = meal * 0.0675;
    double totalAfterTax = meal + tax;
    double tip = totalAfterTax * 0.20;
    double totalBill = totalAfterTax + tip;

    cout << "Tien an: " << meal << endl;
    cout << "Thue: " << tax << endl;
    cout << "Tip: " << tip << endl;
    cout << "Tong hoa don: " << totalBill << endl;

    return 0;
}