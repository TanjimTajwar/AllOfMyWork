#include<iostream>
#include<cmath>
using namespace std;
main()
{
    int Gekko[5][5];
    int row,col;
    for(int a=0;a<5;a++)
    {
        for(int b=0;b<5;b++)
        {
            cin>>Gekko[a][b];
        }
    }
    for(int a=0;a<5;a++)
    {
        for(int b=0;b<5;b++)
        {
            if(Gekko[a][b]==1)
            {
                row=a;
                col=b;
                break;
            }
        }
    }
    int moves= abs(row-2)+abs(col-2);
    cout<<moves;
    return 0;
}

