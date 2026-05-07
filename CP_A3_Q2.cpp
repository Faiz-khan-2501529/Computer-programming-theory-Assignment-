#include <iostream>
#include <cmath>    // for sqrt()
using namespace std;

// -----------------------------------------------
// Function: stdev
// Input  : x[] = array of doubles, n = count
// Output : standard deviation (double)
// Steps  : 1) Compute mean
//          2) Compute sum of squared differences
//          3) Return sqrt( sum / n )
// -----------------------------------------------
double stdev(double x[], int n) {
    // Step 1: Calculate mean (average)
    double sum = 0.0;
    for (int i = 0; i < n; i++)
        sum += x[i];           // Accumulate all values
    double mean = sum / n;     // Compute mean

    // Step 2: Compute sum of squared deviations
    double sqSum = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = x[i] - mean; // Deviation from mean
        sqSum += diff * diff;      // Square and accumulate
    }

    // Step 3: Return square root of variance
    return sqrt(sqSum / n);    // sqrt( sum of sq. deviations / n )
}

int main() {
    int n;
    cout << "Enter number of data points: ";
    cin >> n;

    double x[n];
    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; i++)
        cin >> x[i];

    cout << "Standard Deviation = " << stdev(x, n) << endl;
    return 0;
}