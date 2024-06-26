#include <iostream>
using namespace std;

int main() {
    int amount;
    cin >> amount;

    // 計算10元鈔數量
    int ten_count = amount / 10;
    // 計算剩餘金額
    amount %= 10;
    
    // 計算5元鈔數量
    int five_count = amount / 5;
    // 計算剩餘金額
    amount %= 5;

    // 剩餘即為1元鈔數量
    int one_count = amount;

    // 輸出結果
    cout << "NT10="<<ten_count  << endl;
    cout << "NT5="<<five_count << endl;
    cout << "NT1="<<one_count  << endl;

    return 0;
}
