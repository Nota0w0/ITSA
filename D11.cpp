#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int count;
    cin >> count;
    int number;
    int A=0,B=0,C=0,D=0,F=0;
    for(int i=0;i<count;i++){
        cin >> number;
        if(number >=90){
            A++;
        }else if(number >=80) {
           B++; 
        }else if(number >=70){
            C++;
        } else if(number >=60){
            D++;
        }else {
          F++;  
        }
    }
    cout << "優等 "<< A << endl;
    cout << "甲等 "<< B << endl;
    cout << "乙等 "<< C << endl;
    cout << "丙等 "<< D << endl;
    cout << "不及格 "<< F << endl;


    return 0;   
}