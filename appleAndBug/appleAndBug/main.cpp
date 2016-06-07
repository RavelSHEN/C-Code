//
//  main.cpp
//  appleAndBug
//
//  Created by 峰 沈 on 7/6/2016.
//  Copyright © 2016 RavelSHEN. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    int remain;
    if (n <= y/x) {
        remain = 0;
    } else {
        remain = n - ceil(static_cast<double>(y)/x);
    }
    cout << remain << endl;
}
