#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int a = 0; a < t; a++) {
        int Tcows, MyCow;
        cin >> Tcows >> MyCow;

        int aray[Tcows];
        for(int b = 0; b < Tcows; b++) {
            cin >> aray[b];
        }

        int myCowWeight = aray[MyCow - 1];
        int count = 0;

        for(int d = 0; d < Tcows; d++) {
            if(d != MyCow - 1 && aray[d] > myCowWeight) {
                count++;
            }
        }
        if(Tcows==2 && aray>)
        cout << count << endl;
    }

    return 0;
}
