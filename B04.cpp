#include <iostream>
#include <iomanip> // 包含iomanip以使用setprecision
using namespace std;

int main() {
    int number_tests=0;
    cin >> number_tests;
    int first[number_tests],second[number_tests];
    for(int i=0;i<number_tests;i++){
        cin >>first[i]>>second[i];
    }
        
    for(int i=0;i<number_tests;i++){
        int added = first[i]+second[i];
        cout << added << endl;
    }
    return 0;
}
