// Chương trình giao dịch cổ phiếu 
// Tháng trước Joe đã mua một số cổ phiếu tại Acme Software, Inc. Dưới đây là chi tiết của việc mua: 
// − Số lượng cổ phiếu mà Joe mua là 1.000. 
// − Khi Joe mua cổ phiếu, anh ta trả 45,50 đô la cho mỗi cổ phiếu. 
// − Joe đã trả cho người môi giới chứng khoán của mình một khoản hoa hồng lên tới 2% số tiền anh ta trả cho cổ phiếu. 
// Hai tuần sau, Joe bán cổ phiếu. Dưới đây là chi tiết của đợt giảm giá: 
// − Số cổ phiếu mà Joe đã bán là 1.000. 
// − Anh đã bán cổ phiếu với giá 56,90 USD / cổ phiếu. 
// − Anh ta đã trả cho người môi giới chứng khoán của mình một khoản hoa hồng khác lên tới 2% số tiền anh ta nhận được cho cổ phiếu. 
// Viết chương trình hiển thị thông tin sau: 
// − Số tiền Joe đã trả để mua cổ phiếu. 
// − Số tiền hoa hồng Joe trả cho người môi giới của mình khi anh ta mua cổ phiếu. 
// − Số tiền mà Joe đã có được khi bán cổ phiếu 
// − Số tiền hoa hồng Joe đã trả cho người môi giới của mình khi anh ta bán cổ phiếu. 
// Hiển thị số lợi nhuận mà Joe kiếm được sau khi bán cổ phiếu của mình và trả hai khoản hoa hồng cho người môi giới của anh ấy.
//  (Nếu số lợi nhuận mà chương trình của bạn hiển thị là một số âm, thì Joe đã mất tiền trong giao dịch.) 

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int shares = 1000;
    double buyPrice = 45.50;
    double sellPrice = 56.90;
    double rate = 0.02;

    double buyCost = shares * buyPrice;
    double buyCommission = buyCost * rate;

    double sellRevenue = shares * sellPrice;
    double sellCommission = sellRevenue * rate;

    double profit = sellRevenue - sellCommission - buyCost - buyCommission;

    cout << fixed << setprecision(2);
    cout << "Money paid for stock: $" << buyCost << endl;
    cout << "Buy commission: $" << buyCommission << endl;
    cout << "Money received from sale: $" << sellRevenue << endl;
    cout << "Sell commission: $" << sellCommission << endl;
    cout << "Profit: $" << profit << endl;

    return 0;
}
