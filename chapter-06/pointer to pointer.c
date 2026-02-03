#include<stdio.h>
int main()
{
    int a=12;
    int *b=&a;
    int **c=&b;
    int ***d=&c;
    printf("a=%u\n",&a);
    printf("Value a=%d\n",a);
    printf("b=%u\n",&b);
    printf("Value b=%d\n",b);
    printf("c=%u\n",&c);
    printf("Value c=%d\n",c);
    printf("d=%u\n",&d);
    printf("Value d=%d\n",d);
    return 0;
}
