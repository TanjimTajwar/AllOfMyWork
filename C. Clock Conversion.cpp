#include <iostream>
using namespace std;

int main()
{
   int N;
   cin>>N;
   for(int z=0;z<N;z++)
   {
        string s;
    cin >> s;
    int Thour = stoi(s.substr(0, 2));
    int Tminute = stoi(s.substr(3, 2));
    if (Thour > 12) {
        Thour -= 12;
        cout <<Thour<<":";
        if (Tminute < 10)cout<<"0";
        cout << Tminute <<" PM"<<endl;
    }
    else if(Thour==12)
    {
         cout <<Thour<<":";
        if (Tminute < 10)cout<< "0";
        cout << Tminute <<" PM"<< endl;
    }
    else
    {
        cout << Thour << ":";
        if (Tminute < 10) cout << "0";
        cout << Tminute <<" AM"<< endl;
    }

   }
    return 0;
}
