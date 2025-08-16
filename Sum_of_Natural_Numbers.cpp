#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit if the input is not a positive integer
    }

    for (int i = 1; i <= n; ++i) {
        sum += i; // Add each natural number to the sum
    }

    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;

    return 0;
}