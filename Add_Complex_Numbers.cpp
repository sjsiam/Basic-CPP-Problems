#include<iostream>
using namespace std;

int main() {
    float n1real, n1imaginary, n2real, n2imaginary;
    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> n1real >> n1imaginary;
    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> n2real >> n2imaginary;
    cout << "The sum of the two complex numbers is: " << n1real + n2real << " + " << n1imaginary + n2imaginary << "i";
}