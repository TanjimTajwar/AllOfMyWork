#include<stdio.h>
main()
{
    int n;
    int x=0;
    int y=0;
    int z=0;
    scanf("%d",&n);
    int b=3*n;
    int Bemo[100];
    for(int a=0;a<b;a++)
    {
        scanf("%d",&Bemo[a]);
    }
    for(int a=0;a<b;a=a+3)
    {
        x=x+Bemo[a];
    }
    for(int a=1;a<b;a=a+3)
    {
        y=y+Bemo[a];
    }
    for(int a=2;a<b;a=a+3)
    {
        z=z+Bemo[a];
    }
    if(x==0&& y==0&& z==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
