#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char gamewon[n];

    for (int a = 0; a < n; a++)
    {
        scanf(" %c", &gamewon[a]);
    }

    int Anton = 0;
    int Danik = 0;

    for (int b = 0; b < n; b++)
    {
        if (gamewon[b] == 'A')
        {
            Anton++;
        }
        else
        {
            Danik++;
        }
    }

    if (Anton > Danik)
    {
        printf("Anton\n");
    }
    else if(Anton < Danik)
    {
        printf("Danik\n");
    }
    else
    {
        printf("Friendship");
    }

    return 0;
}
