#include <iostream>

using namespace std;
int countLuckyDigits(long long n) {
    int count = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            count++;
        }
        n /= 10;
    }
    return count;
}
bool isLuckyNumber(int num) {
    return num == 4 || num == 7 || num == 44 || num == 47 || num == 74 || num == 77;
}

int main() {
    long long n;
    cin >> n;
    int luckyDigitCount = countLuckyDigits(n);
    if (isLuckyNumber(luckyDigitCount)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
