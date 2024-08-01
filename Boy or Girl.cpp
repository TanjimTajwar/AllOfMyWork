#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
main()
{
    string suzuka;
    cin>> suzuka;
    unordered_set<char> nobita;
    for(char ch: suzuka)
    {
        nobita.insert(ch);
    }
   if(nobita.size()%2==0)
    {
       cout << "CHAT WITH HER!" << endl;
    }
     else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
   }
