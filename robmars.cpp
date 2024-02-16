#include <iostream>
#include <vector>
using namespace std;

int mars(int arr1[], int m, int n) {
    int l = m - n;
    vector<int> arr2(m), arr3(l);
    int count1 = 0, k = 0, sum = 0;

    // Initialize arr2 with stone weights from 1 to m
    for (int i = 0; i < m; i++) {
        arr2[i] = i + 1;
    }

    // Fill arr3 with stone weights not present on earth
    for (int i = 0; i < m; i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            arr3[k++] = arr2[i];
        }
    }

    // Calculate the maximum unique stones that can be collected
    for (int i = 0; i < l; i++) {
        if (sum + arr3[i] <= m) {
            sum += arr3[i];
            count1++;
        } else {
            break;
        }
    }

    return count1;
}

int main() {
    int n, m;
    cout << "Enter the size of the bag and the number of different stone weights present on Mars: ";
    cin >> m;
    cout << "Enter the number of common stones on earth and Mars: ";
    cin >> n;
    int arr1[n];
    cout << "Enter the weights of the common stones: ";
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    cout << "Maximum unique stones that can be collected from Mars: " << mars(arr1, m, n) << endl;
    return 0;
}
