#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int number;
    cin >> number;
    int matrix[number];
    for(int i=0;i<number;i++){
        cin >> matrix[i];
    }
    for(int i = number-1;i>=0;i--){
        if(i == 0){
            cout << matrix[0];
        }else
            cout << matrix[i] << " ";
    }
    cout << endl;
    return 0;
}