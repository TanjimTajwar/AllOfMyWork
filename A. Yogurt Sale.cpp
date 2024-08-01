#include<iostream>
using namespace std;

int main() {
    int testes;
    cin >> testes;
    while (testes--) {
        int Tobuy, regular, offer;
        cin >> Tobuy >> regular >> offer;

        int ans;
        if (Tobuy % 2 == 0) {
            int p = Tobuy / 2;
            ans = min(p * offer, Tobuy * regular);
        } else {
            int p = Tobuy / 2;
            ans = min(p * offer + regular, Tobuy * regular);
        }

        cout << ans << endl;
    }
    return 0;
}
