#include <iostream>
using namespace std;

// -----------------------------------------------
// Function: getValue
// Reads a 3x3 matrix from user input
// Input : 2D array A[3][3] to fill
// -----------------------------------------------
void getValue(int A[3][3], char name) {
    cout << "Enter values for Matrix " << name << " (3x3):\n";
    for (int i = 0; i < 3; i++)        // Row loop
        for (int j = 0; j < 3; j++) {   // Column loop
            cout << "  [" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
}

// -----------------------------------------------
// Function: computeAxA
// Multiplies two 3x3 matrices A and B
// Result stored in C
// C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j]
//          + A[i][2]*B[2][j]
// -----------------------------------------------
void computeAxA(int A[3][3], int B[3][3], int C[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0;           // Initialize result cell
            for (int k = 0; k < 3; k++)
                C[i][j] += A[i][k] * B[k][j]; // Dot product
        }
    }
}

// -----------------------------------------------
// Function: printArray
// Prints a 3x3 matrix in formatted grid
// -----------------------------------------------
void printArray(int A[3][3], char name) {
    cout << "Matrix " << name << ":\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << A[i][j] << "\t"; // Tab-separated columns
        cout << endl;               // New row
    }
}

int main() {
    int A[3][3], B[3][3], C[3][3]; // Declare three matrices

    getValue(A, 'A');   // Read Matrix A
    getValue(B, 'B');   // Read Matrix B

    computeAxA(A, B, C); // Multiply: C = A x B

    printArray(A, 'A'); // Print Matrix A
    printArray(B, 'B'); // Print Matrix B
    printArray(C, 'C'); // Print Result Matrix C
    return 0;
}