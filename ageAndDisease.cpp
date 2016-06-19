// Copyright [2016] <Ravel SHEN>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0, b = 0, c = 0, d = 0;
    int age;
    for (int i = 0; i < n; i++) {
        cin >> age;
        if (age <= 18)
            a++;
        else if (age <= 35)
            b++;
        else if (age <= 60)
            c++;
        else
            d++;
    }
    int total = a + b + c + d;
    double fraca, fracb, fracc, fracd;
    fraca = static_cast<double> (a) / total * 100;
    fracb = static_cast<double> (b) / total * 100;
    fracc = static_cast<double> (c) / total * 100;
    fracd = static_cast<double> (d) / total * 100;
    cout << fixed << setprecision(2) << "1-18: " << fraca << "%" << endl;
    cout << "19-35: " << fracb << "%" << endl;
    cout << "36-60: " << fracc << "%" << endl;
    cout << "60-: " << fracd << "%" << endl;
    return 0;
}
