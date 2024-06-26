#include <iostream>
using namespace std;

int main() {
    int amount;
    cin >> amount;

    // 計算100元鈔數量
    int hun_count = amount / 100;
    // 計算剩餘金額
    amount %= 100;
    
    // 計算10元鈔數量
    int ten_count = amount / 10;
    // 計算剩餘金額
    amount %= 10;

    // 剩餘即為1元鈔數量
    int one_count = amount;
    cout << "百元 " << hun_count << endl;
    cout << "十元 " << ten_count << endl;
    cout << "壹元 " << amount << endl;


    return 0;
}
