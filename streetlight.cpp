#include <iostream>
using namespace std;

int main() {
    int n, min, max;
    
    // Input the number of street lights
    cout << "Enter total number of street lights: ";
    cin >> n;
    
    int a[n][2];
    
    // Input the range covered by each street light
    for (int i = 0; i < n; i++) {
        cout << "Light " << i + 1 << " covers the street from X" << i + 1 << " to Y" << i + 1 << ". Please enter the value of X and Y: ";
        cin >> a[i][0] >> a[i][1];
    }
    
    // Find the minimum and maximum values of X and Y
    min = a[0][0];
    max = a[0][1];
    
    for (int k = 0; k < n; k++) {
        if (a[k][0] < min)
            min = a[k][0];
        if (a[k][1] > max)
            max = a[k][1];
    }
    
    // Calculate the length of the street covered with light
    int length = max - min;
    
    // Output the result
    cout << "Length of street = " << length << endl;
    
    return 0;
}
