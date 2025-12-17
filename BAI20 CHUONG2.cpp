// Tiệm Pizza của Joe đang cần một chương trình tính toán số lượng miếng cắt của một chiếc pizza có kích cỡ bất kỳ. Chương trình thực hiện các bước như sau: 
// A.	Yêu cầu người dùng nhập vào đường kính của chiếc pizza (đơn vị là inches). 
// B.	Tính toán số lượng miếng cắt có thể chia ra từ chiếc pizza với kích cỡ đó. 
// C.	Hiển thị một thông báo rằng số lượng miếng cắt nên được thực hiện. 
// Để tính toán được số lượng miếng cắt hợp lý, bạn cần biết một số thông tin sau: 
// − Mỗi miếng cắt cần phải có diện tích 14.125 inches. 
// − Để tính toán số lượng miếng cắt, đơn giản ta chia diện tích của chiếc pizza cho 14.125. 
// − Diện tích của chiếc pizza được tính theo công thức:   
// Hãy đảm bảo rằng output của chương trình hiển thị chính xác số lượng các miếng cắt, và nó ở định dạng kí hiệu fixed-point, làm tròn đến số đầu tiên đằng sau dấu phẩy. 
// Nên sử dụng pi như một hằng số. 

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double diameter;
    const double PI = 3.14159;
    const double SLICE_AREA = 14.125;

    cout << "Enter pizza diameter (inches): ";
    cin >> diameter;

    double radius = diameter / 2;
    double area = PI * radius * radius;
    double slices = area / SLICE_AREA;

    cout << fixed << setprecision(1);
    cout << "Number of slices: " << slices << endl;

    return 0;
}
