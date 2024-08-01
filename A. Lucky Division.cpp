#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    if(num % 4 == 0 || num % 7 == 0 || num % 44 == 0 || num % 77 == 0 || num % 47 == 0 || num % 74 == 0 || num % 777 == 0 || num % 444 == 0 || num % 477 == 0 || num % 744 == 0 || num % 474 == 0 || num % 744 == 0 || num % 447 == 0 || num % 774 == 0)
    {
        cout << "YES";
    }
    else if(num == 4 || num == 7 || num == 44 || num == 77 || num == 74 || num == 47 || num == 444 || num == 777 || num == 477 || num == 744 || num == 474 || num == 744 || num == 447 || num == 774)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
