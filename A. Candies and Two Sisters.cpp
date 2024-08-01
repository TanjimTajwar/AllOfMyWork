#include<iostream>
using namespace std;
int main()
{
    int tests;
    cin>>tests;
    for(int A=0;A<tests;A++)
    {
        int candies;
        cin>>candies;
        int half=candies/2;
        int answer=candies-half-1;
        cout<<answer<<endl;
    }
    return 0;
}
