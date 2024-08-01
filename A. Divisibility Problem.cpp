#include<iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int count = 0;
    int a[num], b[num];

    // Input loop
    for (int c = 0; c < num; c++)
    {
        cin >> a[c] >> b[c];
    }

    // Calculation loop
    for (int d = 0; d < num; d++)
    {
        // Calculate the remainder
        int remainder = a[d] % b[d];

        // Adjust a[d] to make it divisible by b[d]
        if (remainder != 0)
        {
            a[d] += (b[d] - remainder);
            count = (b[d] - remainder); // Set count directly
        }
        else
        {
            count = 0;
        }

        cout << count << " ";
    }

    return 0;
}
