// Copyright [2016] <Ravel SHEN>
#include <iostream>
using namespace std;

int main() {
    int money;
    cin >> money;
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    a = money / 100;
    b = (money % 100) / 50;
    c = (money % 50) / 20;
    d = (money % 20) / 10;
    e = (money % 10) / 5;
    f = money % 5;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    return 0;
}
