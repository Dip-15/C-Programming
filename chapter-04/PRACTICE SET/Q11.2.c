#include<stdio.h>
int main()
{
    int n,i=2,prime=1;
    printf("Enter the number:");
    scanf("%d",&n);
    do
    {
        if(n%i==0)
        {
            prime=0;
            break;
        }
        i++;
    }
    while(i<n);
    if(prime==0)
    {
        printf("It's not a prime");
    }
    else
    {
        printf("It's a prime");
    }
    return 0;
}
