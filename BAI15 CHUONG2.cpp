// Một quận thu thuế bất động sản trên giá trị đánh giá của tài sản, bằng 60 phần trăm giá trị thực của tài sản. 
// Nếu một mẫu đất được định giá là 10.000 đô la, thì giá trị đánh giá của nó là 6.000 đô la.
// Thuế cho diện tích được đánh giá là $ 6.000 sẽ là $ 45. 
// Viết chương trình yêu cầu nhập giá trị thực của một phần tài sản, sau đó hiển thị giá trị đánh giá và thuế tài sản. 
// (1 đô la = 100 cent) 
#include <iostream>
using namespace std;

int main() {
    double actualValue;
    cout << "Nhap gia tri thuc cua tai san: ";
    cin >> actualValue;

    double assessedValue = actualValue * 0.6;
    double tax = (assessedValue / 100) * 0.75;

    cout << "Gia tri danh gia: " << assessedValue << endl;
    cout << "Thue tai san: " << tax << endl;

    return 0;
}
