#include<iostream>
using  namespace std;
int main()
{
    int hp,total;
    cin>>hp>>total;
    for(int a=1;a<=total;a++)
    {
        int dragon,bonus;
        cin>>dragon>>bonus;
        if(hp<=dragon)
        {
            cout<<"NO";
            return 0;
        }
        else
        {
            hp=hp+bonus;
        }
    }
    cout<<"YES";
    return 0;
}
