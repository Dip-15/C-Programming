#include<stdio.h>
void pass(int a)
{
    printf("After Address =%u\n",&a);
}
int main()
{
    int i=10;
    printf("Before Address =%u\n",&i);
    pass(i);
    return 0;
}
