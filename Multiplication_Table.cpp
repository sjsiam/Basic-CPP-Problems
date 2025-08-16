#include<iostream>
using namespace std;

int main() {
    int n;

    cin >> n;
    cout << "Multiplication Table of " << n << " is:" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}