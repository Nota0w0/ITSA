#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int matrix[6];
    for(int i =0 ;i<6;i++){
        cin >> matrix[i];
    }
    cout << matrix[0]* matrix[0]+matrix[1]* matrix[1]+matrix[2]* matrix[2]+matrix[3]* matrix[3]+matrix[4]* matrix[4]+matrix[5]* matrix[5] << endl;
    return 0;
}