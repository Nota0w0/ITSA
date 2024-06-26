#include <iostream>
using namespace std;

int main() {
    int number_tests=0;
    cin >> number_tests;
    int first[number_tests];
    for(int i=0;i<number_tests;i++){
        cin >>first[i];
    }
        
    for(int i=0;i<number_tests;i++){
        int square = first[i]*first[i];
        int cube = first[i]*first[i]*first[i];
        cout << first[i]<<" "<<square<<" " << cube << endl;
    }
    return 0;
}
