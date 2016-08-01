// Copyright [2016] <Ravel SHEN>
#include <iostream>
using namespace std;

int main() {
    int num;
    int flag[3] = {0};
    int count = 0;
    cin >> num;
    if (num % 3 == 0) {
        flag[0] = 3;
        count++;
    }
    if (num % 5 == 0) {
        flag[1] = 5;
        count++;
    }
    if (num % 7 == 0) {
        flag[2] = 7;
        count++;
    }
    if (count == 0) {
        cout << 'n' << endl;
    } else {
        for (int i = 0; i < 3; i++) {
            if (flag[i] != 0) {
                cout << flag[i] << ' ';
            }
        }
    }
}
