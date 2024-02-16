#include <iostream>
using namespace std;

int wedding(string str, int y, int l) {
    int count = 0;
    int num = 0;
    int x = 0;
    
    for (int i = 0; i < l; ++i) {
        num = num * 10 + (str[i] - '0');
        
        // Check if the current number formed is less than or equal to Y
        if (num <= y) {
            x = 1;
            continue;
        }
        
        // If the current number exceeds Y, increment count if there was a valid number formed before
        if (x) {
            count += 1;
        }
        
        num = str[i] - '0';
        x = 0;
        
        // Check if the current digit can form a number less than or equal to Y
        if (num <= y) {
            x = 1;
        } else {
            num = 0;
        }
    }
    
    // Increment count if there's a valid number formed at the end of the string
    if (x) {
        count += 1;
    }
    
    return count;
}

int main() {
    string str;
    int y, l;
    
    // Input string, Y, and the size of the string
    cin >> str;
    cin >> y;
    cin >> l;
    
    // Call the wedding function and output the result
    cout << wedding(str, y, l) << endl;
    
    return 0;
}
