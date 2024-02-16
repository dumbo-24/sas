#include <iostream>
using namespace std;

int points(int num, int arr[][2]) {
    int res = 0, max_height = INT_MIN; // Initialize max_height to smallest possible value

    // Iterate through each point
    for (int i = 0; i < num; i++) {
        // Check if the y-coordinate of the current point is greater than max_height
        if (arr[i][1] > max_height) {
            res++; // Increment the result counter
            max_height = arr[i][1]; // Update max_height
        }
    }
    return res;
}

int main() {
    int num;
    cin >> num; // Input the number of points

    int arr[num][2];
    // Input the coordinates of each point
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }

    // Call the points function to find the number of points above the x-axis
    cout << points(num, arr) << endl;

    return 0;
}
