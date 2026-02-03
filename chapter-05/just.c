#include<stdio.h>
void fun()
{
    static int a;
    
}
void main()
    {
        int a =10;
        {
            int b=20;
            printf("%d %d",a,b);
        }
     a=a+b;
     printf("%d %d",a,b);
        return 0;
    }