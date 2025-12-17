// Một chiếc xe ô tô có thể chứa được 15 gallon xăng và có thể di chuyển được 375 dặm trước khi cần nạp lại.
// Viết chương trình tính toán số dặm trên mỗi gallon mà xe có thể đi được.
// Hiển thị nó ra màn hình.  
#include <iostream>
using namespace std;

int main() {
    double miles = 375;
    double gallons = 15;
    double mpg = miles / gallons;

    cout << "So dam tren moi gallon: " << mpg << endl;
    return 0;
}