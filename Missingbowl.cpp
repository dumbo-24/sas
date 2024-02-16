#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of bowls
    int a[] = {7, 8, 12, 12, 13}; // Array containing the number of marbles in each bowl

    // Calculate the index of the missing bowl
    int key = n / 2;
    
    // Calculate the sum of the marbles in the first and last bowls
    int val = a[0] + a[n - 1];

    // Calculate the number of marbles in the missing bowl
    int missing_marbles = val - a[key];

    // Output the result
    cout << "The number of marbles in the missing bowl is: " << missing_marbles << endl;

    return 0;
}


#include <iostream>
using namespace std;

int marble(int num, int *arr) {
    int word;

    // Calculate the expected sum of marbles in the first and last bowls
    word = arr[num - 1] + arr[0];

    // Check each pair of bowls to find the missing one
    for (int i = 0; i < num; i++) {
        if (arr[i] + arr[num - i - 1] != word) {
            // Return the number of marbles in the missing bowl
            return word - arr[i];
        }
    }
    // If no missing bowl is found, return the sum of the marbles in the first and last bowls
    return word;
}

int main() {
    int num;
    cin >> num; // Number of bowls

    int arr[num];
    // Input the number of marbles in each bowl
    for (int i = 0; i < num; i++)
        cin >> arr[i];

    // Call the marble function to find the missing bowl
    cout << marble(num, arr) << endl;

    return 0;
}
