//
// Created by jelly on 02/01/2020.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i > 0; i--) {
        for (int j = n - i; j > 0; j--) cout << ' ';

        for (int j = 0; j < i * 2 - 1; j++) cout << '*';
        cout << '\n';
    }

    return 0;
}