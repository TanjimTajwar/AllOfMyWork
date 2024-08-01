#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int mid = (a + b + c) - max({a, b, c}) - min({a, b, c});
    int ans = abs(a - mid) + abs(b - mid) + abs(c - mid);

    cout << ans << endl;
    return 0;
}
