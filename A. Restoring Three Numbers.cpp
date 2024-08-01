#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int array[4];
    for(int i=0;i<4;i++)
    {
        cin>>array[i];
    }
    sort(array,array+4);
    int x,y,z;
    x=array[0]+array[1]-array[3];
    y=array[0]+array[2]-array[3];
    z=array[1]+array[2]-array[3];
    cout<<x<<" "<<y<<" "<<z;
    return 0;
}
