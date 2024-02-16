#include <iostream>
using namespace std;

int main() {
    int arr[100], n, count = 0;
    cout << "Enter the number of bowls: ";
    cin >> n;
    cout << "Enter the number of marbles in each bowl: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] != 9) {
            cout << i + 1 << endl;
            break;
        }
        count++;
    }

    if (count == n) {
        cout << "0" << endl;
    }

    return 0;
}
