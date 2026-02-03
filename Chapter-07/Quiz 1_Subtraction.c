#include<stdio.h>
int main()
{
    int arr[3];
    int *p=&arr[0];
    printf("The before address of n =%u\n",p);
    p++;
    printf("The after address of n =%u\n",p);
 //
    printf("The after address of n=%d\n\n",*p);
    return 0;
}
