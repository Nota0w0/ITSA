#include <iostream>
#include <cmath> // 包含cmath來使用pow函數
using namespace std;

int main() {
    int number_tests=0;
    cin >> number_tests;
    int first[number_tests];
    for(int i=0;i<number_tests;i++){
        cin >>first[i];
    }
        
    for(int i=0;i<number_tests;i++){
        if(first[i] <= 31){
            int result = pow(2, first[i]);
            cout << result << endl;
        }else
            cout << "Value of more than 31" << endl;
        
    }
    return 0;
}
