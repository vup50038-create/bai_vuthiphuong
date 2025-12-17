// Một công ty điện tử bán một bo mạch với lợi nhuận là 35 phần trăm. 
// Viết chương trình tính toán giá bán của một bo mạch có chi phí là 14.95 đô la.
// Hiện kết quả lên màn hình. 

#include <iostream>
using namespace std;

int main() {
    double cost = 14.95;
    double price = cost + cost * 0.35;

    cout << "Gia ban bo mach: " << price << " USD\n";
    return 0;
}