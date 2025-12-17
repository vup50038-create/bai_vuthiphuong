// Khoản thanh toán hàng tháng cho một khoản vay có thể được tính theo công thức sau: 
// Payment = Rate * (1+ Rate)*N /((1+ Rate)^N -1) *L  
// Trong đó, Rate là lãi suất hàng tháng, được tính bằng lãi suất hàng năm chia cho 12. (12% lãi suất hàng năm sẽ là 1% lãi suất hàng tháng.) N là số lần thanh toán và L là số tiền của khoản vay. 
// Hãy viết một chương trình yêu cầu nhập vào các giá trị này và hiển thị báo cáo dưới dạng tương tự như sau: 

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double loan, annualRate;
    int n;

    cout << "Loan Amount: ";
    cin >> loan;
    cout << "Annual Interest Rate (%): ";
    cin >> annualRate;
    cout << "Number of Payments: ";
    cin >> n;

    double rate = annualRate / 100 / 12;
    double payment = (rate * pow(1 + rate, n)) / (pow(1 + rate, n) - 1) * loan;
    double totalPaid = payment * n;
    double interest = totalPaid - loan;

    cout << fixed << setprecision(2);
    cout << "\nMonthly Payment: $" << payment << endl;
    cout << "Amount Paid Back: $" << totalPaid << endl;
    cout << "Interest Paid: $" << interest << endl;

    return 0;
}
