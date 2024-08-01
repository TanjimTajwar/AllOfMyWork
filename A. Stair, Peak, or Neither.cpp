#include<iostream>
using namespace std;
main()
{
    int m;
    cin>>m;
    for(int t=1;t<=m;t++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b&&b<c)
        {
            cout<<"STAIR"<<endl;
        }
        else if(a<b && b>c)
        {
            cout<<"PEAK"<<endl;
        }
        else
        {
            cout<<"NONE"<<endl;
        }
    }
    return 0;
}
