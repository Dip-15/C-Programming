#include <stdio.h>
void main()
{
    int a, b, c;
    a = 10;
    b = 20;
    c = sum(a, b);
    printf("C=%d", c);
}
void sum(int x, int y)
{
   x + y;
}