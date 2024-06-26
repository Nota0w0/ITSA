#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int P=0;
    cin >> P;
    if(P<10){
        cout << P*100 << endl;
    }else if(P<30){
        cout << P*90 << endl;
    }else if(P<=99){
        cout << P*80 << endl;
    }else
        cout << P*70 << endl;
    
    return 0;
}