// Kathryn đã mua 750 cổ phiếu với giá 35.00 USD / cổ phiếu. ô ấy phải trả cho người môi giới chứng khoán của mình khoản hoa hồng 2% cho giao dịch.
//  Viết một chương trình tính toán và hiển thị như sau: 
// − Số tiền thanh toán cho cổ phiếu (không có hoa hồng). 
// − Số tiền hoa hồng. 
// − Tổng số tiền đã thanh toán (tổng cho cổ phiếu cộng với tiền hoa hồng). 

#include <iostream>
using namespace std;

int main() {
    int shares = 750;
    double price = 35.0;
    double rate = 0.02;

    double stockCost = shares * price;
    double commission = stockCost * rate;
    double total = stockCost + commission;

    cout << "Tien co phieu: " << stockCost << " USD\n";
    cout << "Tien hoa hong: " << commission << " USD\n";
    cout << "Tong tien thanh toan: " << total << " USD\n";
    return 0;
}