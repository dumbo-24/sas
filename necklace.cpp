#include <iostream>
using namespace std;

float compute(int num1, int r) {
    float res = 1;
    for(int i = num1; i >= 1; i--) {
        res = (res * (r + (i - 1)) / i);
    }
    return res;
}

int necklace(int num1, int num2, int num3) {
    int count = 0, k = 0, r;
    r = (num3 - num2) + 1;
    while(k < num1) {
        count += compute(num1 - k, r);
        k++;
    }
    cout << count << endl;
    return 0;
}

int main() {
    int num1, num2, num3;
    cout << "Enter number of pearls: ";
    cin >> num1;
    cout << "Enter starting magnificent coefficient of pearls: ";
    cin >> num2;
    cout << "Enter ending magnificent coefficient of pearls: ";
    cin >> num3;
    necklace(num1, num2, num3);
    return 0;
}
