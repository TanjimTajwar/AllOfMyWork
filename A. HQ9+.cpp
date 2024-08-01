#include<iostream>
#include<string>
using namespace std;
int main()
{
    string arnab;
    cin>>arnab;
    for(int a=0;a<arnab.length();a++)
    {
        if(arnab[a]=='H' ||arnab[a]=='Q' ||arnab[a]=='9')
        {
            cout<<"YES";
            return 0;
        }

    }
    cout<<"NO";
    return 0;
}
