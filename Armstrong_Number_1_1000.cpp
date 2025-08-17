#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    for (int i = 1; i <= 1000; i++)
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