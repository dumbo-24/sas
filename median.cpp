#include <iostream>
using namespace std;

// Function to calculate the difference between the mean and median of an array
int calculateDifference(int arr[], int size) {
    int sum = 0;
    
    // Sorting the array in ascending order
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swapping elements if they're in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    // Calculating the sum of all elements in the array
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    // Calculating the mean and median
    int mean = sum / size;
    int median = (size % 2 == 0) ? (arr[size / 2] + arr[size / 2 - 1]) / 2 : arr[size / 2];
    
    // Returning the absolute difference between mean and median
    return abs(mean - median);
}

int main() {
    int arr[] = {55, 14, 83, 32, 31, 43, 56, 78, 65, 43};
    int n = 10; // Total number of elements in the array
    int k = 6;  // Size of the subarray
    
    int minDifference = INT_MAX; // Initialize minDifference to maximum possible integer value
    
    // Iterate over all possible subarrays of size k
    for (int i = 0; i <= n - k; i++) {
        int temp[k];
        // Copy elements from main array to temporary subarray
        for (int j = 0; j < k; j++) {
            temp[j] = arr[i + j];
        }
        // Calculate difference between mean and median of current subarray
        int difference = calculateDifference(temp, k);
        // Update minDifference if current difference is smaller
        minDifference = min(minDifference, difference);
    }
    
    cout << "The minimum difference between mean and median is: " << minDifference << endl;
    
    return 0;
}
