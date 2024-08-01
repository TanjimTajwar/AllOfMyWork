#include<iostream>
using namespace std;
int main()
{
    int Test;
    cin>>Test;
    while(Test--)
    {
        int Num,Common;
        cin>>Num;
        int Spy[Num];
        for(int a=0;a<Num;a++)
        {
            cin>>Spy[a];
        }
        if(Spy[0]==Spy[1])
        {
            Common=Spy[0];
        }
        else if(Spy[2]==Spy[1])
        {
            Common=Spy[1];
        }
        else if(Spy[0]==Spy[2])
        {
            Common=Spy[0];
        }
        for(int b=0;b<Num;b++)
        {
            if(Common!=Spy[b])
            {
                cout<<b+1<<endl;
                break;
            }
        }
    }
    return 0;
}
