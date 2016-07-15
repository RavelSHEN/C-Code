// Copyright [2016] <Ravel SHEN>
#include <iostream>
using namespace std;
int main() {
    double N, K;
    while (cin >> N >> K) {
        bool flag = false;
        double price = 200.0;
        for (int i = 1; i <= 20; i++) {
            if (N * i >= price) {
                flag = true;
                cout << i << endl;
                break;
            }
            price = price * (1.0 + K / 100.0);
        }
        if (flag == false) {
            cout << "Impossible" << endl;
        }
    }
}
