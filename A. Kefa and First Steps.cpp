#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int pro[n];
    int count = 1;
    int maxi = 0;

    for (int t = 0; t < n; t++)
    {
        cin >> pro[t];
    }

    for (int t = 1; t < n; t++)
    {
        if (pro[t] >= pro[t - 1]) // Use >= to handle the case when adjacent elements are equal
        {
            count++;
        }
        else
        {
            if (maxi <= count)
            {
                maxi = count;
            }
            count = 1;
        }
    }

    // Check one more time after the loop ends
    if (maxi <= count)
    {
        maxi = count;
    }

    cout << maxi << endl;
    return 0;
}
