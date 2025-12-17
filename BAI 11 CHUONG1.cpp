// Một chiếc xe với một bình xăng 20 gallon trung bình 23.5 dặm cho mỗi gallon khi lái xe trong thành phố, và 28.9 dặm cho mỗi gallon khi lái xe trên đường cao tốc. 
// Viết chương trình tính toán và hiển thị quãng đường ô tô đi được với một bình xăng khi di chuyển trên thị trấn và khi di chuyển trên đường cao tốc. 
#include <iostream>
using namespace std;

int main() {
    double tank = 20;
    double city = 23.5;
    double highway = 28.9;

    cout << "Quang duong trong thanh pho: " << tank * city << " dam\n";
    cout << "Quang duong tren cao toc: " << tank * highway << " dam\n";
    return 0;
}
