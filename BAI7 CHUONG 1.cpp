// Giả sử mức nước biển hiện tại dâng lên khoảng 1.5 mm mỗi năm, viết một chương trình hiển thị: 
// − Số mm sẽ tăng lên so với mức nước biển hiện tại sau 5 năm. 
// − Số mm sẽ tăng lên so với mức nước biển hiện tại sau 7 năm. 
// − Số mm sẽ tăng lên so với mức nước biển hiện tại sau 10 năm. 
#include <iostream>
using namespace std;

int main() {
    double risePerYear = 1.5;

    cout << "Sau 5 nam: " << risePerYear * 5 << " mm" << endl;
    cout << "Sau 7 nam: " << risePerYear * 7 << " mm" << endl;
    cout << "Sau 10 nam: " << risePerYear * 10 << " mm" << endl;

    return 0;
}