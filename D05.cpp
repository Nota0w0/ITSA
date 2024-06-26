#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int number;
    cin >> number;
    int matrix[number];
    for(int i =0 ;i<number;i++){
        cin >> matrix[i];
    }
    for(int i = 1;i<number;i++){
        matrix[i] =  matrix[i] -  matrix[i-1];
    }   
    for(int i = 1;i<number;i++){
       if(i == number-1){
            cout << matrix[i];
        }else
            cout << matrix[i] << " ";
    } 
    cout << endl;
    return 0;
}