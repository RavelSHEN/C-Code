// Copyright [2016]<Ravel SHEN>
#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;
    if ((year % 4 == 0 && year % 100 !=0)
        || (year % 400 == 0 && year % 3200 !=0)) {
        cout << 'Y' << endl;
    } else {
        cout << 'N' << endl;
    }
}
