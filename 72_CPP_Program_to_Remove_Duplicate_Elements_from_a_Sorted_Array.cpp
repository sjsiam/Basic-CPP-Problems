#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n], temp[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int j = 0;
    for (int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1]) temp[j++] = arr[i];
    temp[j++] = arr[n - 1];
    for (int i = 0; i < j; i++) cout << temp[i] << " ";
    return 0;
}
