#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int max_number = -2147483647;
    int number,count;
    cin >> count;
    for(int i=0;i<count;i++){
        cin >> number;
        if(number>max_number){
            max_number = number;
        }
    }
    cout << max_number << endl;
    return 0;
}