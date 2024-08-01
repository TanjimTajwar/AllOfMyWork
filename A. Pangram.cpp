#include <iostream>
#include <set>
#include <cctype>
using namespace std;

string pangram(int n, string Btype)
{
    set<char> uniqueT;
    for (char &c : Btype)
    {
        if (isalpha(c))
        {
            uniqueT.insert(tolower(c));
        }
    }
    return (uniqueT.size() == 26) ? "YES" : "NO";
}

int main() {
    int n;
    cin >> n;
    string Btype;
    cin >> Btype;
    cout << pangram(n, Btype) << endl;
    return 0;
}
