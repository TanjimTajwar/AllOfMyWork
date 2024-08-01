#include<iostream>
using namespace std;
int main()
{
    int Num,Party,count=0;
    int minute=0;
    cin>>Num>>Party;
    int Time_left= 240-Party;
    for(int a=1;a<=Num;a++)
    {
        minute=minute+a*5;
        if(minute>Time_left)
        {
            break;
        }
        count++;
    }
    cout<<count<<endl;
    return 0;
}
