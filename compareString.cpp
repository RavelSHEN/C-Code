// Copyright [2016]<Ravel SHEN>
#include <iostream>
using namespace std;

int main() {
    char word1[80], word2[80];
    char result;
    cin.getline(word1, 80);
    cin.getline(word2, 80);
    for (int i = 0; i < 80; i++) {
        if (word1[i] >= 'A' && word1[i] <= 'Z') {
            word1[i] += 32;
        }
        if (word2[i] >= 'A' && word2[i] <= 'Z') {
            word2[i] += 32;
        }
    }
    int i = 0;
    if (word1[i] > word2[i]) {
        result = '>';
    } else if (word1[i] < word2[i]) {
        result = '<';
    } else {
        result = '=';
    }
    while (word1[i] != '\0' && word1[i] == word2[i]) {
        i++;
        if (word1[i] > word2[i]) {
            result = '>';
        } else if (word1[i] < word2[i]) {
            result = '<';
        } else {
            result = '=';
        }
    }
    cout << result << endl;
}
