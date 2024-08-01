#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        int total,d,e;
        d=b/3;
        if(b%3==1 && c<2 ||b%3==2 && c<1 )
        {
            cout<<"-1"<<endl;
            continue;
        }
        if(b%3==1)
        {
            d=d+1;
            c=c-2;
        }
        else if(b%3==2)
        {
            d=d+1;
            c=c-1;
        }
        e=c/3;
        if(c%3!=0)
        {
            e=e+1;
        }
        total=a+d+e;
        cout<<total<<endl;
    }
    return 0;
}
