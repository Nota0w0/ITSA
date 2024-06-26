#include <iostream>
using namespace std;

int main() {
    int length= 0, weigth = 0;
    cin >> length >> weigth;
    //cout << length << weigth;
    for(int i=0;i<weigth;i++){
        for(int i=0;i<length;i++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
