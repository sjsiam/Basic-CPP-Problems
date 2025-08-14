#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;
    bool isPrime = true;

    if (n == 1 || n == 0)
    {
        cout << n << " is not a prime number." << endl;
        return 0;
    }

    if (n == 2)
    {
        cout << n << " is a prime number." << endl;
        return 0;
    }


    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}