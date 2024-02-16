#include <iostream>
using namespace std;

int sum(int arr[], int n, int k) {
    // Sorting the array in descending order
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1; j++) {
            if(arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Calculating the sum of top K scorers
    int total = 0;
    for(int i = 0; i < k; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int n, k;
    cout << "Enter the Total number of Participants: ";
    cin >> n;

    int arr[n];
    cout << "Enter the number of top scorers to consider: ";
    cin >> k;

    cout << "Enter the scores: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Sum of the top " << k << " scorers: " << sum(arr, n, k) << endl;

    return 0;
}
