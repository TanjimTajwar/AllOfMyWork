#include<iostream>
using namespace std;
main()
{
    int test;
    cin>>test;
    for(int a=1;a<=test;a++)
    {
        int j;
        cin>>j;
        for(int b=1;b<=j;b++)
        {
            for(int d=0;d<=1;d++)

            {
              for(int c=1;c<=j;c++)
              {
                    if(b%2!=0&&c%2==0)
                    cout<<"..";
                else if(b%2==0 && c%2!=0)
                    {
                        cout<<"..";
                    }
                else
                {
                    cout<<"##";
                }
              }
              cout<<endl;
            }
        }
    }
    return 0;
}
