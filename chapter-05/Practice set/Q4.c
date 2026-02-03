#include<stdio.h>
int fibonacci(int a);
int main()
{
    int n;
    printf("Enter the num =");
    scanf("%d",&n);
    printf("%dth element of fibonacci series is =%d",n,fibonacci(n));
    return 0;
}
int fibonacci(int a)
{
    if(a==0)
    {
        return 0;
    }
    else if(a==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(a-1)+fibonacci(a-2);
    }

}

