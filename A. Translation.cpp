#include<iostream>
#include <cstring> // Include the <cstring> header for strlen
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int n = s.length(); // Use string's length() method
    int n1 = t.length(); // Use string's length() method

    if (n != n1) {
        cout << "NO";
        return 0; // Add a return statement to end the program
    }

    int count = 0;
    for (int a = 0, b = n - 1; a < n; a++, b--) {
        if (s[a] == t[b]) {
            count++;
        }
    }

    if (count == n) {
        cout << "YES";
    } else {
        cout << "NO"; // Add a case for "NO" if the condition is not met
    }

    return 0;
}
