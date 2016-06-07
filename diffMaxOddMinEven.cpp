// Copyright [2016] <Ravel SHEN>
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int num[6];
    int maxOdd = 0;
    int minEven = 100;
    for ( int i = 0; i < 6; i++ ) {
        cin >> num[i];
    }
    for ( int i = 0; i < 6; i++ ) {
        if ( num[i] % 2 == 1 && num[i] > maxOdd ) {
            maxOdd = num[i];
        }
        if ( num[i] % 2 == 0 && num[i] < minEven ) {
            minEven = num[i];
        }
    }
    cout << abs ( maxOdd - minEven ) << endl;
}
