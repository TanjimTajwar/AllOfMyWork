#include<iostream>
using namespace std;
int main()
{
    int n,h;
    int sum=0;
    cin>>n>>h;
    int a[n];
    for(int t=0;t<n;t++)
    {
        cin>>a[t];
    }
    for(int t=0;t<n;t++)
    {
        int ans=0;
        ans=a[t]/h;
        if(a[t]%h==0)
        {
            sum=sum+ans;
        }
        else
        {
            sum=sum+ans+1;
        }
    }
    cout<<sum;

}
