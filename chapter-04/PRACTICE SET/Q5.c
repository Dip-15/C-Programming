#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    i=0;
    while(i<=n)
    {

        sum+=i;

        i++;

    }

    printf("%d\n",sum);
    return 0;
}
