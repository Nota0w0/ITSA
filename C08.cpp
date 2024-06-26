#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int number;
    cin >> number;
    switch (number)
    {
    case 1:
        cout << "Person"<<endl;;
        break;
    case 2:
        cout << "Fairy"<<endl;
        break;
    default:
        cout << "Dwarf"<<endl;
        break;
    }
    return 0;
}