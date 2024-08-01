#include<iostream>
#include<string.h>
using namespace std;
main()
{
    string players;
    cin>>players;
    bool seven= false;
    int count1=1;
    for(int a=1;a<players.length();++a)
    {
        if(players[a]==players[a-1])
            {
                count1++;
        if(count1==7)
        {
            seven = true;
            break;
        }
            }
            else
            {
                count1=1;
            }
    }
    if(seven)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;

}
