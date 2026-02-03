#include<stdio.h>
int main()
{
    int n,i,prime=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
           prime=0;
           break;
        }
    }
    if(prime==0)
    {
        printf("It's not a prime number");
    }
    else
    {
        printf("It's a prime");
    }
    return 0;
}
