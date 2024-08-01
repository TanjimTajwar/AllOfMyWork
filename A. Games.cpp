#include<iostream>
using namespace std;
int main()
{
    int c,count=0;
    cin>>c;
    int host[c],away[c];
    for(int j=0;j<c;j++)
    {
        cin>>host[j]>>away[j];
    }
    for(int L=0;L<c;L++)
    {
        for(int M=0;M<c;M++)
        {
            if(host[L]==away[M])
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
