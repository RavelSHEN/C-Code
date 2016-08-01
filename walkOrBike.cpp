// Copyright [2016] <Ravel SHEN>
#include <iostream>
#include <string>
using namespace std;
int main() {
    int num;
    cin >> num;
    string *choice = new string[num];
    for (int i = 0; i < num; i++) {
        double dist;
        double wTime, bTime;
        cin >> dist;
        wTime = dist / 1.2;
        bTime = 50.0 + dist / 3;
        if (wTime > bTime) {
            choice[i] = "Bike";
        } else {
            choice[i] = "Walk";
        }
    }
    for (int i = 0; i < num; i++) {
        cout << choice[i] << endl;
    }
}
