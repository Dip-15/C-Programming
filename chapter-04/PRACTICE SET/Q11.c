#include<stdio.h>
int main()
{
    int n,i=2,prime=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        {
            prime=0;
            break;
        }
        i++;
    }
    if(prime==0)
    {
        printf("it's not a prime");
    }
    else
    {
        printf("It's a prime");
    }
    return 0;
}
