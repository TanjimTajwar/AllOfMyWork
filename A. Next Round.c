#include<stdio.h>
main()
{
    int n,k;
    int count=0;
    scanf("%d%d",&n,&k);
    int jim[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&jim[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(jim[j]>=jim[k-1] && jim[j]!=0)
        {
            count++;
        }
    }
    printf("%d\n",count);
}
