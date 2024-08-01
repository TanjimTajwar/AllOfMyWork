#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int people[n];
    for(int a=0;a<n;a++)
    {
        cin>>people[a];
    }
    for(int b=0;b<n;b++)
    {
        if(people[b]==1)
        {
            cout<<"HARD";
            return 0;
        }

    }
    cout<<"EASY";
    return 0;
}
