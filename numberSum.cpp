// Copyright [2016] <Ravel SHEN>
#include <iostream>
using namespace std;
int main() {
    int a;
    int num[5];
    int sum = 0;
    cin >> a;
    for (int i = 0; i < 5; i++) {
        cin >> num[i];
        if (num[i] < a) {
            sum += num[i];
        }
    }
    cout << sum << endl;
    return 0;
}
