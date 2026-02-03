#include<stdio.h>
int Binary(int a,int n);
int main()
{
    int a=10,n=2;
    printf("The value of Binary %d is %d",a,Binary(a,n));
    return 0;
}
int Binary(int a,int n)
{

    if(a==0)
    {
        return 1 ;
    }
    else
    { 
       int x=a%2;
        a=a/2;
        Binary(a,2);
        printf("%d ",x);
    }
}