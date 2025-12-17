// Một nhãn hiệu sơn quảng cáo rằng sơn của họ có thể phủ được 340 feet vuông trên mỗi gallon.
// Viết chương trình xác định và báo cáo xấp xỉ số lượng gallon sơn cần thiết để sơn cho hai lớp áo trên hàng rào bằng gỗ cao 6 feet và dài 100 feet. 

#include <iostream>
using namespace std;

int main() {
    double height = 6;
    double length = 100;
    double coverage = 340;

    double area = height * length;
    double totalArea = area * 2; // 2 lop son
    double gallons = totalArea / coverage;

    cout << "So gallon son can thiet: " << gallons << endl;

    return 0;
}