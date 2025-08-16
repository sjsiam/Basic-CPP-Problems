#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
    int n, newNumber = 0;

    cin >> n;

    string strNumber = to_string(n);
    int numDigits = strNumber.length();

    int a[numDigits];

    for (int i = 0; i < numDigits; i++) {
        a[i] = strNumber[i] - '0';
    }


    for (int i = 0; i < numDigits; i++) {
        newNumber += pow(a[i], numDigits);
    }

    if (newNumber == n) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;

}