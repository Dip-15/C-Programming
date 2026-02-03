#include<stdio.h>
int change(int a);
int main()
{
    int b=22;
    change(b);
    printf("%d",b);
    return 0;
}
int change(int a)
{
    a=77;
    return a;
}
