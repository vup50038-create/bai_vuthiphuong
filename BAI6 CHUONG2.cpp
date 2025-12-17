// Công thức làm bánh với các thành phần như sau: 
// − 1.5 cốc đường 
// − 1 cốc bơ 
// − 2.75 cốc bột 
// Với các phần như trên cho ra 48 chiếc bánh.
// Bạn hãy viết một chương trình yêu cầu người dùng nhập số lượng chiếc bánh mà họ muốn làm, 
// sau đó hiển thị ra tỉ lệ của các thành phần theo công thức trên để đủ làm được số chiếc bánh mà họ muốn. 

#include <iostream>
using namespace std;

int main() {
    double cookies;

    cout << "Nhap so banh muon lam: ";
    cin >> cookies;

    double factor = cookies / 48.0;

    cout << "Luong nguyen lieu can:" << endl;
    cout << "Duong: " << 1.5 * factor << " coc" << endl;
    cout << "Bo: " << 1.0 * factor << " coc" << endl;
    cout << "Bot: " << 2.75 * factor << " coc" << endl;

    return 0;
}
