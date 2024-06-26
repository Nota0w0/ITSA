#include <iostream>
#include <iomanip> // 包含iomanip以使用setprecision
using namespace std;

int main() {
    double weight, height;

    // 輸入體重和身高
    cin >> weight;
    cin >> height;
    height = height/100;
    // 計算BMI
    double BMI = weight / (height * height);

    // 設置輸出格式，輸出到小數點後兩位
    cout << fixed << setprecision(2)<<  BMI << endl;

    return 0;
}
