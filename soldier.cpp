#include <iostream>
using namespace std;

// Recursive function to find the position of the last soldier
int josephus(int n, int k) {
    // Base case: if there's only one soldier left, return its position
    if (n == 1)
        return 1;
    else
        // Recursively call josephus function for (n-1) soldiers and k skip
        return (josephus(n - 1, k) + k - 1) % n + 1;
}

// Function to find the position of the last soldier before the one killed by A
int findLastPosition(int n) {
    int k = 2;  // Skipping every alternate soldier
    int pos = josephus(n, k); // Get the position of the last soldier before the one killed by A
    if (pos - 1 == 0) {
        pos = n; // If the position is 0, set it to n
    } else {
        pos = pos - 1; // Otherwise, decrement the position
    }
    return pos;
}

int main() {
    int n;
    cout << "Enter the number of soldiers: ";
    cin >> n;
    int lastPosition = findLastPosition(n);
    cout << "Position of the last soldier: " << lastPosition << endl;
    return 0;
}
