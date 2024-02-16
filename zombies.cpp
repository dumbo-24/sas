#include <iostream>
using namespace std;

// Function to find the greatest common divisor (GCD) of two numbers
int coprime(int a, int b) {
    int hcf = 1;
    // Finding the greatest common divisor using Euclidean algorithm
    for (int i = 1; i <= a || i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }
    return hcf;
}

// Function to find the position of the first pair of zombies that are coprime
int find(int arr[], int n) {
    int position = -1;
    // Iterate through the array to find the first pair of zombies that are coprime
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            if (coprime(arr[i], arr[i + 1]) == 1) {
                position = i + 1; // Position of the second zombie in the coprime pair
                break; // Exit the loop once the coprime pair is found
            }
        }
    }
    return position; // Return the position of the second zombie in the coprime pair
}

int main() {
    int arr[100], n;
    cout << "Enter the number of zombies: ";
    cin >> n;
    cout << "Enter the array of zombie strengths: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int position = find(arr, n);
    if (position != -1) {
        cout << "Position of the first pair of coprime zombies: " << position << endl;
    } else {
        cout << "No pair of coprime zombies found." << endl;
    }
    return 0;
}
