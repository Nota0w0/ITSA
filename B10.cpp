#include <iostream>
#include <iomanip> // 包含iomanip以使用setprecision
using namespace std;

int main() {
    int mi =0;
    cin >> mi;
    double km = 1.6*mi;
    cout << fixed << setprecision(1);
    cout << "km="<<km << endl;
    return 0;
}
