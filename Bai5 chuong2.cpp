// Viết một chương trình yêu cầu người dùng nhập vào số lượng người nam và số lượng người nữ của một lớp.
// Chương trình sẽ hiển thị tỉ lệ phần trăm của nam và nữ ra màn hình.  
// Gợi ý: Giả sử có 8 nam và 12 nữ trong một lớp. Do đó tổng sĩ số của lớp là 20. 
// Tỉ lệ phần trăm của nam có thể được tính bằng công thức 8 : 20 = 0.4 hoặc 40 phần trăm. 
// Tỉ lệ phần trăm của nữ có thể được tính bằng công thức 12 : 20 = 0.6 hoặc 60 phần trăm.  
#include <iostream>
using namespace std;

int main() {
    int nam, nu;
    cout << "Nhap so nam: ";
    cin >> nam;
    cout << "Nhap so nu: ";
    cin >> nu;

    int tong = nam + nu;
    double ptNam = (double)nam / tong * 100;
    double ptNu = (double)nu / tong * 100;

    cout << "Ti le nam: " << ptNam << "%" << endl;
    cout << "Ti le nu: " << ptNu << "%" << endl;

    return 0;
}
