#include <iostream>
using namespace std;

void placement(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] < arr[j]) {
                count++;
            }
        }
        cout << count << " ";
    }
}

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    int arr[100];
    cout << "Enter the problem-solving capability of each student: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Number of students ahead with higher capability: ";
    placement(arr, n);
    cout << endl;

    return 0;
}
