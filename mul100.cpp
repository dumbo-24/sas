#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr[10], n, sum = 0;
    string str;

    cout << "Enter the array size: ";
    cin >> n;

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the string (N or P): ";
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'N')
            arr[i] *= -1;
    }

    for (int i = 0; i < n; i++)
        sum += arr[i];

    sum *= 100;

    cout << "Result: " << sum << endl;

    return 0;
}
