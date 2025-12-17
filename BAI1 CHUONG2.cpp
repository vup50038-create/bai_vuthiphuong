// Viết chương trình tính toán mức tiêu thụ xăng của ô tô. 
// Chương trình này sẽ yêu cầu người dùng nhập số gallon xăng xe có thể chứa, và nhập số dặm nó có thể đi được  khi được đổ đầy xăng. 
// Sau đó nó sẽ hiển thị số dặm có thể được lái đi trên mỗi gallon xăng

#include <iostream>
using namespace std;

int main() {
    double gallons, miles;

    cout << "Nhap so gallon xang: ";
    cin >> gallons;
    cout << "Nhap so dam da di: ";
    cin >> miles;

    double mpg = miles / gallons;

    cout << "So dam tren moi gallon: " << mpg << endl;
    return 0;
}