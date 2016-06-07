// Copyright [2016] <Ravel SHEN>
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
    double r, h;
    double volume;
    int numOfWater;
    cin >> r >> h;
    volume = 0.5 * M_PI * r * r * h / 1000;
    numOfWater = ceil(20 / volume);
    cout << numOfWater << endl;
}
