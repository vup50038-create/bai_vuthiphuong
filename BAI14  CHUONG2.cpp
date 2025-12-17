// Một công ty bán lẻ phải nộp một báo cáo thuế bán hàng hàng tháng liệt kê doanh thu trong tháng và số thuế bán hàng đã thu được.
//  Viết một chương trình yêu cầu nhập tháng, năm và tổng số tiền thu được tại máy tính tiền (tức là doanh thu cộng với thuế bán hàng). Giả sử thuế bán hàng của tiểu bang là 4 phần trăm, và thuế bán hàng của quận là 2 phần trăm. 
// Nếu biết tổng số tiền thu được và tổng số thuế bán hàng là 6 phần trăm, thì số tiền bán sản phẩm có thể được tính như sau: S=T/1.06
// Trong đó, S là doanh thu bán sản phẩm, và T là tổng thu nhập (doanh thu bán sản phẩm cộng với thuế bán hàng). 
// Một báo cáo của chương trình có thể tương tự như dưới đây: 

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string month;
    int year;
    double totalCollected;

    cout << "Nhap thang: ";
    cin >> month;
    cout << "Nhap nam: ";
    cin >> year;
    cout << "Nhap tong tien thu duoc: ";
    cin >> totalCollected;

    double sales = totalCollected / 1.06;
    double stateTax = sales * 0.04;
    double countyTax = sales * 0.02;
    double totalTax = stateTax + countyTax;

    cout << fixed << setprecision(2);
    cout << "\nMonth: " << month << " " << year << endl;
    cout << "Total Collected: $" << totalCollected << endl;
    cout << "Sales: $" << sales << endl;
    cout << "County Sales Tax: $" << countyTax << endl;
    cout << "State Sales Tax: $" << stateTax << endl;
    cout << "Total Sales Tax: $" << totalTax << endl;

    return 0;
}
