#include<stdio.h>
int Pow(int a,int n);
int main()
{
    int a=3,n=4;
    printf("The value of Pow %d is %d",a,Pow(a,n));
    return 0;
}
int Pow(int a,int n)
{

    if(n==1)
    {
        return a;
    }
    else
    {
        return a*Pow(a,n-1);
    }
}
