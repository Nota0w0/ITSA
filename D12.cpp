#include <iostream>
#include <string.h>
#include <iomanip> // 包含iomanip標頭檔案
using namespace std;

int main(){
    int max_num = -2147483647;
    int min_num =  2147483647;
    int count;
    cin >> count;
    int number;
    double average=0;
    int pass=0;
    for(int i=0;i<count;i++){
        cin >> number;
        if(number >= 60) pass++;
        if(number > max_num) max_num = number;
        if(number < min_num) min_num = number;
        average+=number;
    }
    cout << "Max:"<< max_num << endl;
    cout << "Min:"<< min_num <<endl;
    cout << fixed << setprecision(1) << "Average:" << average/count << endl;
    cout << "Pass:" << pass << endl;
    return 0;   
}