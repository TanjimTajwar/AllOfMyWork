#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int a=1;a<=n;a++)
    {
        if(a%2!=0)
        {
            cout<<"I hate ";
        }
        else
        {
            cout<<"I love ";
        }
        if(n>1 && a!=n)
        {
            cout<<"that ";
        }
    }
    cout<<"it";
}
