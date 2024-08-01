#include<iostream>
using namespace std;
int main()
{
    int m,count=0,police=0;
    cin>>m;
    for(int t=1;t<=m;t++)
    {
        int event;
        cin>>event;
        if(event==-1)
        {
            if(police<=0)
            {
                count++;
            }
            else
            {
                police--;
            }
        }
        else
        {
            police=police+event;
        }
    }
    cout<<count<<endl;
    return 0;
}
