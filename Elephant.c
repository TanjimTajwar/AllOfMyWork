#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    scanf("%d", &x);
    int t = (int)ceil((double)x / 5);
    printf("%d\n", t);

    return 0;
}
