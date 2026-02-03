#include<stdio.h>
int main()
{
    int n=10,i,factorial=1;
    for(i=1;i<=n;i++)
    {
        factorial*=i;
    }
    printf("%d",factorial);
    return 0;
}
