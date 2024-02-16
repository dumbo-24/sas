#include <iostream>
#include <algorithm>
using namespace std;

int qpaper(int num, int arr[]) {
    sort(arr, arr + num); // Sorting the array in ascending order

    int sum = 0, cnt = 0;
    for (int i = 0; i < num; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (arr[i] == arr[j]) {
                cnt++;
                arr[i] = arr[i - 1] + 1;
            }
        }
    }
    for (int i = 0; i < num; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the number of questions in the paper: ";
    cin >> n;

    int arr[n];
    cout << "Enter the marks assigned to every question: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Minimum total marks: " << qpaper(n, arr) << endl;
    return 0;
}
