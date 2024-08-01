#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int groups[n];
    for (int i = 0; i < n; i++) {
        cin >> groups[i];
    }

    int count = 1;
    for (int i = 1; i < n; i++) {
        if (groups[i] != groups[i - 1]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
