// Một rạp chiếu phim được giữ lại 20% tổng doanh thu thu được từ việc bán vé. Phần còn lại chuyển cho nhà phân phối phim.
//  Viết chương trình tính số tiền cho phòng vé và nhà phân phối. Chương trình cần yêu cầu nhập tên phim, số vé cho người lớn và số vé cho trẻ em đã được bán.  Biết:  
// - Giá vé cho người lớn là 10 đô la;  - Giá vé cho trẻ em là 6 đô la. 

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string movie;
    int adult, child;

    cout << "Ten phim: ";
    cin.ignore();
    getline(cin, movie);

    cout << "So ve nguoi lon: ";
    cin >> adult;
    cout << "So ve tre em: ";
    cin >> child;

    double total = adult * 10 + child * 6;
    double cinema = total * 0.2;
    double distributor = total * 0.8;

    cout << fixed << setprecision(2);
    cout << "Ten phim: " << movie << endl;
    cout << "Tong doanh thu: $" << total << endl;
    cout << "Rap giu lai: $" << cinema << endl;
    cout << "Nha phan phoi: $" << distributor << endl;

    return 0;
}
