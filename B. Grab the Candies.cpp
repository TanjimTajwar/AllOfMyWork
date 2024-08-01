#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int bags;
        cin >> bags;
        int Mihai = 0, Bianca = 0;
        int candies[bags];
        for (int a = 0; a < bags; a++)
        {
            cin >> candies[a];
        }
        sort(candies, candies + bags, compare);
        for (int b = 0; b < bags; b++) {
            if (candies[b] % 2 == 0) {
                Mihai += candies[b];
            } else {
                Bianca += candies[b];
            }
        }
        if (Mihai <= Bianca) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
