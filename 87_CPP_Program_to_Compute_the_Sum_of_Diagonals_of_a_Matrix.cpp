#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> mat[i][j];
    int sum = 0;
    for (int i = 0; i < n; i++) sum += mat[i][i] + mat[i][n - 1 - i];
    if (n % 2 == 1) sum -= mat[n/2][n/2];
    cout << sum;
    return 0;
}
