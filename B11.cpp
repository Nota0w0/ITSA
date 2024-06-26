#include <iostream>
#include <iomanip> // 包含iomanip以使用setprecision
using namespace std;

int main() {
    double C =0;
    cin >> C;
    double F = C*1.8 + 32;
    
     cout << fixed << setprecision(1) << F << endl;
    return 0;
}
