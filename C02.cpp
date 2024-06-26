#include <iostream>
using namespace std;

int main() {
    char check;
    cin >> check;

    check = tolower(check);
    if (check == 'a' || check == 'e' || check == 'i' || check == 'o' || check == 'u') {
        cout << "母音" << endl;
    } else {
        cout << "子音" << endl;
    }

    return 0;
}
