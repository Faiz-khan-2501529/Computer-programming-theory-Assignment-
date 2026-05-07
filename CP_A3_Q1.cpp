#include <iostream>
using namespace std;

// Function to find min and max using reference parameters
void getExtremes(float& min, float& max, float a[], int n) {
    min = a[0];
    max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }
}

int main() {
    int n = 5;
    float arr[] = {4.5, 2.1, 8.9, 1.2, 5.5};
    float minimum, maximum;
    
    getExtremes(minimum, maximum, arr, n);
    
    cout << "Array values: 4.5, 2.1, 8.9, 1.2, 5.5" << endl;
    cout << "Minimum value: " << minimum << endl;
    cout << "Maximum value: " << maximum << endl;
    
    return 0;
}