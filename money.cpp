#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int num_tasks;
    cout << "Enter the number of tasks: ";
    cin >> num_tasks;

    vector<int> money(num_tasks);
    vector<int> deadline(num_tasks);

    cout << "Enter money associated with each task: ";
    for (int i = 0; i < num_tasks; i++)
        cin >> money[i];

    cout << "Enter deadline for each task: ";
    for (int i = 0; i < num_tasks; i++)
        cin >> deadline[i];

    // Sorting tasks based on money
    sort(money.begin(), money.end());

    // Sorting tasks based on deadline
    sort(deadline.begin(), deadline.end());

    int max_money = 0;

    for (int i = 0; i < num_tasks; i++) {
        max_money += money[i];
        
        // If there are tasks with the same deadline
        if (i < num_tasks - 1 && deadline[i] == deadline[i + 1]) {
            // Choose the one with higher money and subtract its money from the total
            max_money -= min(money[i], money[i + 1]);
        }
    }

    cout << "Maximum amount of money that can be earned: " << max_money << endl;

    return 0;
}
