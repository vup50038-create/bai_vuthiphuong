// Viết một chương trình có thể sử dụng như một gia sư về toán cho các bạn nhỏ. Chương trình sẽ hiển thị hai số ngẫu nhiên để thực hiện phép cộng, ví dụ:
  // 247+ 129
// Sau đó chương trình sẽ dừng lại trong khi học sinh thực hiện việc tính toán. 
// Khi học sinh đã sẵn sàng để kiểm tra đáp án, họ có thể nhấn một phím bất kỳ để chương trình hiển thị kết quả chính xác. 
 // 247 + 129=376
 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int a = rand() % 900 + 100;
    int b = rand() % 900 + 100;

    cout << "  " << a << endl;
    cout << "+ " << b << endl;
    cout << "-----" << endl;
    system("pause");

    cout << "Ket qua: " << a + b << endl;

    return 0;
}