#include <iostream>
using namespace std;

bool isPrime(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, count = 1;
    cout << "Enter the number of users on the social network: ";
    cin >> n;
    
    for (int i = 2; i <= n + 1; i++) {
        if (isPrime(i) && i * 2 > n + 1) {
            count++;
        }
    }

    if (n <= 2) {
        count--;
    }

    cout << "Number of groups that can be formed: " << count << endl;
    return 0;
}
