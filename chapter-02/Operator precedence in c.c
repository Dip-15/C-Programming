#include<stdio.h>
int main()
{
    int x,y,z;
    x=3;
    y=2;
    printf("Enter the z=%d\n",3*x-8*y);
    printf("Enter the z=%d\n",3*x/3*y);
    // When the operators of equal priority are present then we use operator associativity
    // so,3*x/3*y
    // 3*3/3*y
    // 9/3*2
    // 3*2
    // 6
    return 0;
}
