#include<stdio.h>
int main()
{
    int x,y,m,n;
    x=y=10;
    x+=1;
    m=++x;
    n=y--;
    printf("%d/n%dn",m--,n,++x,y);

}
