#include <iostream>
using namespace std;

// 畫空心三角形
void drawHollowTriangle(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1) || i == height) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// 畫實心三角形
void drawSolidTriangle(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
}

// 畫實心倒三角形
void drawSolidInvertedTriangle(int height) {
    for (int i = height; i >= 1; i--) {
        for (int j = 1; j <= height - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int choice;
    cin >> choice;

    int height = 5; // 三角形的高度為5層

    if (choice == 1) {
        drawHollowTriangle(height);
    } else if (choice == 2) {
        drawSolidTriangle(height);
    } else if (choice == 3) {
        drawSolidInvertedTriangle(height);
    } 
    return 0;
}
