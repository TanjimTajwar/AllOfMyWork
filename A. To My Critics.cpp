#include<iostream>
using namespace std;
main()
{
    int times;
    cin>>times;
    while(times--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x<=y && x<=z)
        {
            if(z+y>=10)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
         else if(y<=x && y<=z)
        {
              if(z+x>=10)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
         else
        {
             if(x+y>=10)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
