// Phòng sale The East Coast của một công ty tạo ra 58 phần trăm của tổng doanh thu. 
// Dựa trên tỉ lệ phần trăm đó, viết một chương trình đoán xem Phòng sale The East Coast này sẽ tạo ra con số là bao nhiêu nếu công ty có doanh thu là 8.6 triệu đô trong năm nay.
#include <iostream>
using namespace std;

int main() {
    double totalSales = 8.6;
    double eastPercent = 0.58;
    double eastSales = totalSales * eastPercent;

    cout << "Doanh thu East Coast = " << eastSales << " trieu do";
    return 0;
}
