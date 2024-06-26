#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string chinese[5] = {"狗","貓","鴨","牛","狐"};
    string english[5] = {"dog","cat","duck","cow","fox"};

    string name;
    cin >> name;
    for(int i=0;i<5;i++){
        if(name.compare(chinese[i]) == 0){
            cout << english[i] << endl;
        }
        if(name.compare(english[i]) == 0){
            cout << chinese[i] << endl;
        }
    }
    return 0;
}