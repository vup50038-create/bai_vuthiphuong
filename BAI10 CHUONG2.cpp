// Nhiều chuyên gia tài chính khuyên rằng chủ sở hữu bất động sản nên bảo hiểm ngôi nhà hoặc tòa nhà của họ ít nhất 80% số tiền mà nó sẽ chi phí để thay thế cấu trúc. 
// Viết một chương trình yêu cầu người dùng nhập chi phí thay thế của một tòa nhà, sau đó hiển thị số tiền bảo hiểm tối thiểu mà họ nên mua cho tài sản đó. 

#include <iostream>
using namespace std;

int main() {
    double replacementCost;
    cout << "Nhap chi phi thay the ngoi nha: ";
    cin >> replacementCost;

    double insurance = replacementCost * 0.8;
    cout << "So tien bao hiem toi thieu: " << insurance << endl;
    return 0;
}
