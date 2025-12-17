// Viết một chương trình tính toán lượng mưa trung bình trong 3 tháng. Chương trình yêu cầu người dùng nhập vào tên của mỗi tháng, như là June, July; và lượng mưa 
// (đơn vị đo là inches) của mỗi tháng. Sau đó chương trình hiển thị ra thông báo tương tự như sau: 
// “Lượng mưa trung bình của tháng June, July, và August là 6.72 inches.”. 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string m1, m2, m3;
    double r1, r2, r3;

    cout << "Nhap ten thang 1: ";
    cin >> m1;
    cout << "Luong mua: ";
    cin >> r1;

    cout << "Nhap ten thang 2: ";
    cin >> m2;
    cout << "Luong mua: ";
    cin >> r2;

    cout << "Nhap ten thang 3: ";
    cin >> m3;
    cout << "Luong mua: ";
    cin >> r3;

    double avg = (r1 + r2 + r3) / 3;

    cout << "Luong mua trung binh cua thang "
         << m1 << ", " << m2 << ", va " << m3
         << " la " << avg << " inches." << endl;

    return 0;
}

