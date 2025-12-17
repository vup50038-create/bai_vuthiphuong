// Viết một chương trình yêu cầu người dùng nhập chi phí hàng tháng cho các chi phí sau đây 
// phát sinh từ việc vận hành ô tô của họ: thanh toán khoản vay, bảo hiểm, xăng, dầu, lốp và bảo dưỡng. 
// Sau đó, chương trình sẽ hiển thị tổng chi phí hàng tháng của các chi phí này và tổng chi phí hàng năm của các chi phí này. 

#include <iostream>
using namespace std;

int main() {
    double loan, insurance, gas, oil, tires, maintenance;
    cout << "Nhap chi phi hang thang:\n";
    cin >> loan >> insurance >> gas >> oil >> tires >> maintenance;

    double monthly = loan + insurance + gas + oil + tires + maintenance;
    double yearly = monthly * 12;

    cout << "Tong chi phi hang thang: " << monthly << endl;
    cout << "Tong chi phi hang nam: " << yearly << endl;
    return 0;
}