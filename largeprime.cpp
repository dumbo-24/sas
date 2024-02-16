#include <iostream>
#include <cmath>
using namespace std;

void prime(int n) {
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            count++;
            break;
        }
    }
    if(count == 0 || n == 1) {
        cout << "-1" << endl;
        exit(0);
    }
}

int largeprime(int num) {
    int max = -1;
    if(num % 2 == 0) {
        max = 2;
        num /= 2;
    }
    for(int i = 3; i <= num; i += 2) {
        while(num % i == 0) {
            max = i;
            num /= i;
        }
    }
    return max;
}

int main() {
    int input;
    cout << "Enter the number: ";
    cin >> input;
    prime(input);
    cout << largeprime(input) << endl;
    return 0;
}
