#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int lowerBound, upperBound;
    cout << "Enter the lower bound: ";
    cin >> lowerBound;
    cout << "Enter the upper bound: ";
    cin >> upperBound;
    for (int i = lowerBound; i <= upperBound; i++)
    {
        int n, newNumber = 0;

        n = i;

        string strNumber = to_string(n);
        int numDigits = strNumber.length();

        int a[numDigits];

        for (int i = 0; i < numDigits; i++)
        {
            a[i] = strNumber[i] - '0';
        }

        for (int i = 0; i < numDigits; i++)
        {
            newNumber += pow(a[i], numDigits);
        }

        if (newNumber == n)
        {
            cout << n << " ";
        }
    }

    return 0;
}