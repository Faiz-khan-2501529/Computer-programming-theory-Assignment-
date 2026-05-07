#include <iostream>
#include <string>
using namespace std;

// -----------------------------------------------
// Function: analyzeString
// Input  : string s (passed by reference)
// Output : prints counts of chars/spaces/tabs/lines
// Note   : uses getline() to include spaces & tabs
// -----------------------------------------------
void analyzeString(const string& s) {
    int totalChars = s.length(); // Total length including all chars
    int spaces = 0;             // Count of space characters
    int tabs = 0;               // Count of tab characters
    int lines = 1;              // At least 1 line even with no '\n'

    // Traverse each character in the string
    for (int i = 0; i < totalChars; i++) {
        if (s[i] == ' ')   spaces++;  // Space detected
        if (s[i] == '\t')  tabs++;    // Tab detected
        if (s[i] == '\n')  lines++;   // Newline = new line
    }

    // Display results
    cout << "Total Characters : " << totalChars << endl;
    cout << "Total Spaces     : " << spaces    << endl;
    cout << "Total Tabs       : " << tabs      << endl;
    cout << "Total Lines      : " << lines     << endl;
}

int main() {
    string s;
    cout << "Enter a string (press Enter when done):\n";
    getline(cin, s);   // Use getline to capture spaces & tabs
    analyzeString(s);  // Call analysis function
    return 0;
}