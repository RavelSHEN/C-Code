// Copyright [2016] <Ravel SHEN>
#include <iostream>
using namespace std;
int main() {
    int num;
    int one, ten, hundred;
    cin >> num;
    one = num % 10;
    ten = ( num / 10 ) % 10;
    hundred = num / 100;
    cout << hundred << endl;
    cout << ten << endl;
    cout << one << endl;
}
