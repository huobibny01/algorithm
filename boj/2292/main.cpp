//
// Created by jelly on 01/12/2019.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    n--;
    int count = 0;
    long plus = 0;
    long temp = 0;
    while (n > temp) {
        plus += 6;
        temp += plus;
        count++;
    }

    cout << count + 1;

    return 0;
}
