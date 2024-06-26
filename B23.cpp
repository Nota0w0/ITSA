#include <iostream>
#include <string>
using namespace std;

// 函数将十进制数转换为十六进制字符串
string decimalToHex(int decimalNumber) {
    string hexString;
    string hexDigits = "0123456789ABCDEF"; // 十六进制数字的字符集

    // 特殊情况处理：如果是0直接返回
    if (decimalNumber == 0) {
        return "0";
    }

    // 不断除以16直到商为0，记录每次的余数
    while (decimalNumber > 0) {
        int remainder = decimalNumber % 16;
        hexString = hexDigits[remainder] + hexString;
        decimalNumber /= 16;
    }

    return hexString;
}

int main() {
    int decimalNumber;
    cin >> decimalNumber;

    // 將十進制數字轉換為十六進制
    string hexString = decimalToHex(decimalNumber);

    // 輸出十六進制表示
    cout << hexString << endl;

    return 0;
}
