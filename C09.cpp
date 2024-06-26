#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int number;
    cin >> number;
   if(number>=3 && number <=5){
        cout << "Spring" << endl;
   }else if(number>=6 && number <=8){
        cout << "Summer" << endl;
   }else if(number>=9 && number <=11){
        cout << "Autumn" << endl;
   }else if(number>=12 || number <=2){
        cout << "Winter" << endl;
   }
    return 0;
}