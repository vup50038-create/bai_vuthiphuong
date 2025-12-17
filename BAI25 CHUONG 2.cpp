// Viết một chương trình chơi chữ với người dùng. Chương trình sẽ thực hiện hỏi những dùng những thông tin sau đây: 
// − Tên của người chơi 
// − Tuổi của người chơi 
// − Tên thành phố 
// − Tên trường đại học 
// − Lĩnh vực chuyên môn 
// − Loại động vật 
// − Tên thú cưng 
// Sau khi người dùng nhập vào những thông tin này, chương trình sẽ hiển thị một câu truyện như sau, với việc chèn các thông tin của người dùng vào các vị trí tương ứng thích hợp: 
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, city, college, profession, animal, petName;
    int age;

    cout << "Name: ";
    getline(cin, name);
    cout << "Age: ";
    cin >> age;
    cin.ignore();
    cout << "City: ";
    getline(cin, city);
    cout << "College: ";
    getline(cin, college);
    cout << "Profession: ";
    getline(cin, profession);
    cout << "Animal: ";
    getline(cin, animal);
    cout << "Pet name: ";
    getline(cin, petName);

    cout << "\nThere once was a person named " << name
         << " who lived in " << city << ". At the age of "
         << age << ", " << name << " went to college at "
         << college << ". " << name << " graduated and went to work as a "
         << profession << ". Then, " << name << " adopted a(n) "
         << animal << " named " << petName
         << ". They both lived happily ever after!\n";

    return 0;
}
