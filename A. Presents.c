#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int gift[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&gift[i]);
    }
    int ans[n];
      for(int j=0;j<n;j++)
    {
            ans[gift[j]-1]=j+1;
    }
    for(int j=0;j<n;j++)
    {
            printf("%d ",ans[j]);
    }
    return 0;
}
