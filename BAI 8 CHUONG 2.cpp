// Công ty Yukon Widget sản xuất các vật dụng nặng 12,5 pound mỗi vật. 
// Viết chương trình tính toán có bao nhiêu vật dụng được xếp trên một tấm bảng pallet, dựa trên tổng trọng lượng của pallet.
//  Chương trình sẽ hỏi người dùng xem pallet nặng bao nhiêu và trọng lượng của pallet với các vật dụng được xếp chồng lên nhau.
// Sau đó, nó sẽ tính toán và hiển thị số lượng vật dụng được xếp chồng lên nhau trên pallet.  

#include <iostream>
using namespace std;

int main() {
    double palletWeight;
    const double widgetWeight = 12.5;

    cout << "Nhap tong trong luong pallet: ";
    cin >> palletWeight;

    int widgets = palletWeight / widgetWeight;

    cout << "So vat dung tren pallet: " << widgets << endl;
    return 0;
}