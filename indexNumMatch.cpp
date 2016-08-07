// Copyright <2016> [Ravel SHEN]
#include <iostream>
using namespace std;

int indexMatch(int nums[], int length) {
    for (int i = 0; i < length; i ++) {
        if (nums[i] == i) {
            // cout << nums[i] << ' ' << i << endl;
            return i;
            break;
        }
    }
    return -1;
}

int main() {
    int n;
    int nums[100];
    int result;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> nums[i];
    }
    result = indexMatch(nums, n);
    if (result >= 0) {
        cout << result << endl;
    } else {
        cout << 'N' << endl;
    }
}
