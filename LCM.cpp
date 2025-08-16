#include<iostream>
using namespace std;
int main() {
    int lcm, a, b;
    cout << "Enter two positive integers: ";
    cin >> a >> b;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            lcm = i;
        }
    }
    cout << "LCM of " << a << " and " << b << " is: " << lcm << endl;
    return 0;
}