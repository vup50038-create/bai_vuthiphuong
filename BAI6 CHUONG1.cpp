// Giả sử một nhân viên được trả lương hai tuần một lần và kiếm được 2.200 đô là mỗi kỳ lương. Trong một năm, nhân viên được trả 26 lần. Viết chương trình định nghĩa các biến sau đây:  
// Chương trình tính toán tổng thanh toán hàng năm cho nhân viên bằng cách nhân số tiền thanh toán mỗi lần với số kỳ lương được nhận trong một năm và lưu kết quả vào trong biến annualPay. 
// Hiển thị tổng annualPay ra màn hình. 
#include <iostream>
using namespace std;

int main() {
    int payPerPeriod = 2200;
    int periods = 26;
    int annualPay = payPerPeriod * periods;

    cout << "Luong hang nam = " << annualPay;
    return 0;
}