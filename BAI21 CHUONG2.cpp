// Chỉnh sửa chương trình bạn đã viết trong Programming Challenge 20 (Pizza Pi) để báo cáosố lượng pizza bạn cần mua cho một bữa tiệc nếu mỗi người tham dự có khả năng sẽ ăn khoảng 4 miếng cắt.
// Chương trình cần yêu cầu người dùng nhập vào số lượng người tham dự bữa tiệc, và đường kích loại pizza sẽ được gọi mua.
//  Sau đó tính toán và hiển thị số lượng pizza cần mua lên màn hình.  
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int people;
    double diameter;
    const double PI = 3.14159;
    const double SLICE_AREA = 14.125;

    cout << "Number of people: ";
    cin >> people;
    cout << "Pizza diameter: ";
    cin >> diameter;

    double radius = diameter / 2;
    double slicesPerPizza = (PI * radius * radius) / SLICE_AREA;

    int totalSlices = people * 4;
    int pizzas = ceil(totalSlices / slicesPerPizza);

    cout << "Number of pizzas needed: " << pizzas << endl;

    return 0;
}