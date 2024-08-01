#include<iostream>
using namespace std;
int main()
{
    int times;
    cin>>times;
    while(times--)
    {
        int candidates,serial=1,max=0;;
        cin>>candidates;
        for(int a=1;a<=candidates;a++)
        {
            int words,quality;
            cin>>words>>quality;
            if(words<=10 && quality>max)
            {
                max=quality;
                serial=a;
            }

        }
        cout<<serial<<endl;
    }
    return 0;
}
