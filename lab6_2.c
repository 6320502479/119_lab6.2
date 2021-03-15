#include <stdio.h>
int main()
{
    int n,i,t=0,f=0;
    scanf("%d",&n);
    char num[2][n];
    for(i=0;i<2;i++)
    {
        scanf("%s",&num[i]);
    }
    for(i=0;i<n;i++)
    {
       if(num[0][i]==num[1][i])
            t++;
        else
            f++;
    }
printf("%d %d",t,f);
}
