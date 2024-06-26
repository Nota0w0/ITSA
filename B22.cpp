#include <iostream>
#include <bitset> // 包含 bitset 標頭檔案來使用固定位元數的二進制表示
using namespace std;

int main() {
    int decimalNumber;
    cin >> decimalNumber;

    // 將十進制數字轉換為8位元的二進制表示
    cout << bitset<8>(decimalNumber) << endl;

    return 0;
}
