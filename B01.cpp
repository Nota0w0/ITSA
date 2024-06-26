#include <iostream>
#include <iomanip> // 包含iomanip以使用setprecision
using namespace std;

int main() {
    int base, height;
    double area;

    // 輸入底
    cin >> base;

    // 輸入高
    cin >> height;

    // 計算三角形的面積
    area = 0.5 * base * height;
    cout << fixed << setprecision(1);
    // 輸出結果
    cout << "Triangle area:" << area << endl;

    return 0;
}
