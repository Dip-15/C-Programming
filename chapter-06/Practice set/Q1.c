#include<stdio.h>
int main()
{
    int i=35;
    int *ptr=&i;
    printf("The address of i =%u\n",&i);
    printf("The value of i =%d\n",*(&i));
    return 0;

}
