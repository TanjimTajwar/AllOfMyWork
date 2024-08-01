#include<iostream>
using namespace std;
main()
{
    int lamark,brother;
    cin>>lamark;
    cin>>brother;
    int years=0;
    while(lamark<=brother)
    {
        lamark=lamark*3;
        brother=brother*2;
        years++;
    }
    cout<<years<<endl;
}
