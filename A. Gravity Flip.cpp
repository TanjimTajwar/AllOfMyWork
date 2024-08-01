#include<iostream>
using namespace std;

int main() {
    int NumberOfCol;
    cin >> NumberOfCol;

    int gravity[NumberOfCol];

    for(int a = 0; a < NumberOfCol; a++) {
        cin >> gravity[a];
    }
    for(int a = 0; a < NumberOfCol - 1; a++) {
        for(int b = 0; b < NumberOfCol - a - 1; b++) {
            if(gravity[b] > gravity[b+1]) {
                int temp = gravity[b];
                gravity[b] = gravity[b+1];
                gravity[b+1] = temp;
            }
        }
    }

    for(int a = 0; a < NumberOfCol; a++) {
        cout << gravity[a] << " ";
    }

    return 0;
}
