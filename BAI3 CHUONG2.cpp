// Viết một chương yêu cầu nhập điểm của 5 bài kiểm tra.
// Chương trình thực hiện tính toán giá trị trung bình của 5 bài kiểm tra này sau đó hiển thị lên màn hình.
// Số được hiển thị phải được định dạng theo kí hiệu fixed-point, với độ chính xác là 1 đằng sau dấu phẩy. 

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double d1, d2, d3, d4, d5;

    cout << "Nhap 5 diem: ";
    cin >> d1 >> d2 >> d3 >> d4 >> d5;

    double avg = (d1 + d2 + d3 + d4 + d5) / 5;

    cout << fixed << setprecision(1);
    cout << "Diem trung binh: " << avg << endl;

    return 0;
}