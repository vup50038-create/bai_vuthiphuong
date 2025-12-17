// Giả sử không có khoản tiền gửi nào ngoài khoản đầu tư ban đầu, số dư trong tài khoản tiết kiệm sau một năm có thể được tính theo công thức:
// Payment= Rate*(1+Rate)^N/((1+Rate)^N -1 )
  
// Trong đó, Principal là số dư trong tài khoản tiết kiệm, Rate là lãi suất, và T là số lần tính lãi gộp trong một năm (T là 4 nếu lãi gộp hàng quý). 
// Viết một chương trình yêu cầu tiền gốc, lãi suất và số lần lãi gộp. Nó sẽ hiển thị một báo cáo tương tự như: 

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double principal, rate;
    int T;

    cout << "Nhap tien goc: ";
    cin >> principal;
    cout << "Nhap lai suat (%): ";
    cin >> rate;
    cout << "Nhap so lan ghep lai trong nam: ";
    cin >> T;

    rate /= 100;
    double amount = principal * pow(1 + rate / T, T);

    cout << fixed << setprecision(2);
    cout << "So tien sau 1 nam: $" << amount << endl;

    return 0;
}
