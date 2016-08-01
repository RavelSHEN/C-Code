// Copyright [2016] <Ravel SHEN>
#include <iostream>
using namespace std;

int main() {
    char str[14], substr[4];
    int max = 0;
    cin >> str >> substr;
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] > str[max]) {
            max = i;
        }
    }
    for (int i = 13; i > max + 3; i--) {
        str[i] = str[i-3];
    }
    for (int i = 0; i < 3; i++) {
        str[max+1+i] = substr[i];
    }
    cout << str;
}
