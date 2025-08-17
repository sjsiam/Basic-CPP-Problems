#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms (N): ";
    cin >> n;

    long long first = 0, second = 1;
    long long sum = 0;

    cout << "Fibonacci sequence up to " << n << " terms: ";

    for (int i = 0; i < n; i++) {
        cout << first << " ";

        if (i % 2 == 0) {
            sum += first;
        }

        long long next = first + second;
        first = second;
        second = next;
    }

    cout << "\nSum of Fibonacci numbers at even indexes = " << sum << endl;
    return 0;
}
