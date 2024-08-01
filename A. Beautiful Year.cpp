#include<iostream>
#include<unordered_set>
using namespace std;

bool yearproblem(int year)
{
    unordered_set<int> numbers;
    while(year > 0)
    {
        int digit = year % 10;
        if (numbers.find(digit) != numbers.end())
        {
            return false;
        }
        numbers.insert(digit);
        year /= 10;
    }
    return true;
}

int main()
{
    int y;
    cin >> y;
    while (!yearproblem(++y))
    {

    }
    cout << y;
    return 0;
}
