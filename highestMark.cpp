// Copyright [2016] <Ravel SHEN>
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int highest = 0;
    int markArray[n];


    for ( int i = 0; i < n; i++ ) {
        cin >> markArray[i];
    }

    for ( int i = 0; i < n; i++ ) {
        if (markArray[i] > highest) {
            highest = markArray[i];
        }
    }
    cout << highest << endl;
}
