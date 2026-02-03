#include<stdio.h>
int pass(int k);
int main()
{
    int a=10;
    printf("The value of a before pass =%d\n",a);
    pass(a);
    printf("The value of a after pass =%d\n",a);
    return 0;
}
int pass(int k)
{
    k*=10;
    printf("The value of k after pass function =%d\n",k);
}
