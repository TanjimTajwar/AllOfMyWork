#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main() {
    string mama;
    cin >> mama;
    if (!mama.empty())
    {
        mama[0] = std::toupper(mama[0]);
    }
    cout << mama << std::endl;

    return 0;
}
