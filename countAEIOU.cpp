// Copyright [2016]<Ravel SHEN>
#include <iostream>
using namespace std;

int main() {
    int vowel[5] = {0};
    char myStr[80];
    cin.getline(myStr, 80);
    for (int i = 0; i < 80; i++) {
        switch (myStr[i]) {
            case 'a':
                vowel[0]++;
                break;
            case 'e':
                vowel[1]++;
                break;
            case 'i':
                vowel[2]++;
                break;
            case 'o':
                vowel[3]++;
                break;
            case 'u':
                vowel[4]++;
                break;
            default:
                break;
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << vowel[i] << ' ';
    }
}
