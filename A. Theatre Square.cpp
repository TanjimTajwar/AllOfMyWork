#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   long long a,b,t;
    cin>>a>>b>>t;
 long long answer= ceil((double)a/t)*ceil((double)b/t);
    cout<<answer;
    return 0;
}
