#include<stdio.h>
int main()
{
    int n,i,prime=1;
    printf("Enter the number:");
    scanf("%d",&n);
    i=2;
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
        printf("%d is not a prime",n);
    }
    else
    {
        printf("%d is a prime",n);
    }
    return 0;
}
