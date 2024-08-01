#include<iostream>
using namespace std;
int main()
{
    int v;
    cin>>v;
    string name="codeforces";
   for(int b=0;b<v;b++)
   {
    string love;
    int count=0;
    cin>>love;
    for(int t=0;t<10;t++)
    {
        if(name[t]!=love[t])
        {
            count++;
        }
    }
    cout<<count<<endl;
   }
    return 0;
}
