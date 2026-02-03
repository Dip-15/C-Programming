#include<stdio.h>
int print(int x);
int main()
{
    print(3);
    return 0;
}
int print(int x)
{

    if(x==1)
    {
        return 1;
    }
    else
    {
        print(x-1);
        printf("%d\n",x);
    }
}
