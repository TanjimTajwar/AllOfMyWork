#include<iostream>
using namespace std;
int function_3(int amount)
{
    int count=0;
    int dollars[5]={100,20,10,5,1};
    for(int t=0;t<5;t++)
    {
        count=count+amount/dollars[t];
        amount=amount%dollars[t];
    }
    return count;
}
int main()
{
    int amount;
    cin>>amount;
    int answer=function_3(amount);
    cout<<answer<<endl;
    return 0;

}
