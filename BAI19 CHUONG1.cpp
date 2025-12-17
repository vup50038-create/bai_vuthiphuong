// Nhiệt độ cao trung bình tháng 7 là 85 độ F ở New York City, 88 độ F ở Denver, và 106 độ F ở Phoenix.
//  Viết chương trình tính toán và báo cáo nhiệt độ trung bình mới trong tháng 7 của các thành phố nếu nhiệt độ ở mỗi thành phố tăng lên 2%. 

#include <iostream>
using namespace std;

int main() {
    double newYork = 85;
    double denver = 88;
    double phoenix = 106;

    newYork *= 1.02;
    denver *= 1.02;
    phoenix *= 1.02;

    cout << "Nhiet do moi thang 7:" << endl;
    cout << "New York: " << newYork << " F" << endl;
    cout << "Denver: " << denver << " F" << endl;
    cout << "Phoenix: " << phoenix << " F" << endl;

    return 0;
}