#include<iostream>
using namespace std;
main()
{
    int n,k;
    cin>>n>>k;
    for(int a=1;a<=k;a++)
    {
        if(n%10==0)
        {
            n=n/10;
        }
        else
        {
            n=n-1;
        }
    }
    cout<<n;
    return 0;
}
