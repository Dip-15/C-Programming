#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    i=0;
    do
    {
        sum+=i;
        i++;
    }
    while(i<=n);
    printf("%d",sum);
    return 0;
}
