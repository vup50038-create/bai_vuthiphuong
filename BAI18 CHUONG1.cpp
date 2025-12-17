// Một công ty nước ngọt gần đây đã khảo sát 16,500 khách hàng của mình và thấy rằng khoảng 15% trong số những người được khảo sát mua một hoặc nhiều nước tăng lực mỗi tuần.
// Trong số những khách mua nước tăng lực, có khoảng 58% trong số họ thích nước tăng lực có vị cam. Viết chương trình hiển thị như sau: 
// Số lượng khác hàng gần đúng trong cuộc khảo sát mua một hoặc nhiều nước tăng lực trong mỗi tuần. 
// Số lượng khách hàng gần đúng trong cuộc khảo sát thích nước tăng lực có vị cam. 

#include <iostream>
using namespace std;

int main() {
    int customers = 16500;
    double buyRate = 0.15;
    double orangeRate = 0.58;

    int buyers = customers * buyRate;
    int orangeLovers = buyers * orangeRate;

    cout << "So khach mua nuoc tang luc: " << buyers << endl;
    cout << "So khach thich vi cam: " << orangeLovers << endl;
    return 0;
}