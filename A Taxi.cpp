#include<iostream>
using namespace std;

int main()
{
    int groups;
    cin >> groups;

    int team[groups];
    int answer, sum = 0;

    for(int j = 0; j < groups; j++)
    {
        cin >> team[j];
        sum += team[j];
    }

    answer = (sum + 3) / 4;

    cout << answer;

    return 0;
}
