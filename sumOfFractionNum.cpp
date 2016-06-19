// Copyright [2016] <Ravel SHEN>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sumn = 0, sumd = 1;
    while (n--) {
        int num, deno;
        char slash;
        cin >> num >> slash >> deno;
        sumn = sumn * deno + num * sumd;
        sumd = deno * sumd;
    }
    int a = sumn, b = sumd, c;
    while (a != 0) {
        c = a;
        a = b % a;
        b = c;
    }
    int gcd = b;
    sumn /= gcd;
    sumd /= gcd;
    if (sumd >1) {
        cout << sumn << "/" << sumd << endl;
    } else {
        cout << sumn << endl;
    }
    return 0;
}
