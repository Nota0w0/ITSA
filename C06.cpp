#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int number,count,y;
    cin >> count;
    for(int i=0;i<count;i++){
        cin >> number;
        if(number>=50 && number<=70){
            y=number;
        }else
            y=100;
        cout << y << endl;
    }
    return 0;
}