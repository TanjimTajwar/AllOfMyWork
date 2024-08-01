#include<iostream>
using namespace std;
int main()
{
    int tests;
    cin>>tests;
    while(tests--)
    {
        int size;
        cin>>size;
        string jim;
        cin>>jim;
        int count=0;
        for(int a=0;a<size;a++)
        {
            if(jim[a]=='1')
            {
                count++;
            }
        }
        if(count%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
