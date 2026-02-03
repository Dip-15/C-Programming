#include<stdio.h>
void change(int a);
int main()
{
    int b=22;
    printf("Value before change %d\n",b);
    change(b);
    printf("value after change %d",b);
    return 0;
}
void change(int a)
{
    a=77;
    return a;
}
