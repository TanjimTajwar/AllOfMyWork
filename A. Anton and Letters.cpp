#include<iostream>
#include<string>
#include<cctype>
#include<set>

using namespace std;

int main() {
    string tanjim;
    getline(cin, tanjim);

    set<char> distinctLetters;

    for(char c: tanjim)
    {
        if(islower(c))
        {
           distinctLetters.insert(c);
        }
    }

    cout << distinctLetters.size() << endl;
    return 0;
}
