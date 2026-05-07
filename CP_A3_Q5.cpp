#include <iostream>
#include <algorithm>  // for sort()
using namespace std;

// -----------------------------------------------
// Function: calcMean
// Returns the average of n elements in array
// Formula: mean = sum of all elements / n
// -----------------------------------------------
double calcMean(int a[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];         // Sum all elements
    return sum / n;          // Divide by count
}

// -----------------------------------------------
// Function: calcMedian
// Returns middle value after sorting array
// If n is even: average of two middle elements
// If n is odd : middle element directly
// NOTE: sorts a copy to avoid modifying original
// -----------------------------------------------
double calcMedian(int a[], int n) {
    int temp[n];
    for (int i = 0; i < n; i++)
        temp[i] = a[i];      // Copy array to preserve original

    sort(temp, temp + n);    // Sort the copy in ascending order

    if (n % 2 == 0)          // Even count
        return (temp[n/2 - 1] + temp[n/2]) / 2.0; // Avg of two middles
    else
        return temp[n/2];   // Middle element (odd)
}

// -----------------------------------------------
// Function: calcMode
// Returns the most frequently occurring value
// Approach: compare every pair (O(n^2))
// -----------------------------------------------
int calcMode(int a[], int n) {
    int mode = a[0];         // Assume first element is mode
    int maxCount = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == a[i]) count++; // Count occurrences of a[i]
        }
        if (count > maxCount) {    // Update if higher frequency
            maxCount = count;
            mode = a[i];
        }
    }
    return mode;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << "Mean   = " << calcMean(a, n)   << endl;
    cout << "Median = " << calcMedian(a, n) << endl;
    cout << "Mode   = " << calcMode(a, n)   << endl;
    return 0;
}