#include<iostream>
using namespace std;
int main()
{
    int roomnumber,totalpeople,vacancy;
    cin>>roomnumber;
    int count=0;
    for(int a=0;a<roomnumber;a++)
    {
        cin>>totalpeople>>vacancy;
        if(totalpeople<=vacancy-2)
        {
            count++;
        }
    }
    cout<<count;
}
