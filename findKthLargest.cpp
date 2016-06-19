// Copyright [2016] <Ravel SHEN>
#include <iostream>
using namespace std;

int main() {
    int N, K;
    int num[100];
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }
    for (int i = 0; i < N; i++) {
        int total = 0;
        for (int j = 0; j < N; j++) {
            if (num[j] < num[i]) {
                total++;
            }
        }
        if (total == K - 1) {
            cout << num[i] << endl;
            break;
        }
    }
    return 0;
}
