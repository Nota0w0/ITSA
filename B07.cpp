#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int compared = INT_MIN; // 使用標準最小整數值
    int input;

    for (int i = 0; i < 3; i++) {
        cin >> input;
        if (compared < input) {
            compared = input;
        }
    }

    cout <<compared << endl;

    return 0;
}
