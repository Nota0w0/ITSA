#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    // 雙層迴圈生成乘法表
    for(int i = 1; i <= M; i++) {
        for(int j = 1; j <= N; j++) {
            cout << i << "x" << j << "=" << (i * j) << endl;
        }
    }

    return 0;
}
