#include<iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int square = n * n;

    int sum = 0;

    while (square > 0) {
        int rem = square % 10;

        sum = sum + rem;

        square = square / 10;
    }

    if (sum == n) {
        cout << "Neon Number" << endl;
    } else {
        cout << "Not Neon Number" << endl;
    }
}