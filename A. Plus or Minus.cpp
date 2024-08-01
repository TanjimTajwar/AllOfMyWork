#include<iostream>
using namespace std;
int main()
{
    int tests;
    cin>>tests;
    for(int a=1;a<=tests;a++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x+y==z)
        {
            cout<<"+"<<endl;
        }
        else
        {
            cout<<"-"<<endl;
        }
    }
    return 0;
}
