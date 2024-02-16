#include <iostream>
#include <unordered_set>
using namespace std;

int min_extra_stars(int num, int arr[]) {
    unordered_set<int> unique_badges;

    int extra_stars = 0;
    for (int i = 0; i < num; i++) {
        // Check if the badge number already exists
        while (unique_badges.find(arr[i]) != unique_badges.end()) {
            arr[i]++; // Increment badge number until it becomes unique
            extra_stars++; // Count the extra stars needed
        }
        unique_badges.insert(arr[i]); // Insert the badge number into the set
    }

    return extra_stars;
}

int main() {
    int n;
    cout << "Enter the number of policemen in the special unit: ";
    cin >> n;

    int arr[100];
    cout << "Enter the number of stars on the badge for each policeman: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int extra_stars = min_extra_stars(n, arr);
    cout << "Minimum number of extra stars required: " << extra_stars << endl;

    return 0;
}
