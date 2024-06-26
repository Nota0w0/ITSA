#include <iostream>
using namespace std;

int main() {
    char number[5];
    cin >> number[0] >> number[1] >> number[2] >> number[3] >> number[4];

    for (int i = 0; i < 5; i++) {
        int num = number[i] - '0'; // 将字符转换为对应的整数
        while (num > 0) {
            cout << "*";
            num--;
        }
        cout << endl;
    }
    return 0;
}
