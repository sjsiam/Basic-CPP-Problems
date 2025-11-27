#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int a[n1], b[n2], m[n1 + n2];
    for (int i = 0; i < n1; i++) cin >> a[i];
    for (int i = 0; i < n2; i++) cin >> b[i];
    for (int i = 0; i < n1; i++) m[i] = a[i];
    for (int i = 0; i < n2; i++) m[n1 + i] = b[i];
    for (int i = 0; i < n1 + n2; i++) cout << m[i] << " ";
    return 0;
}
