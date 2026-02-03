#include<stdio.h>
int main()
{
    int num=10;
    int *ptr=&num;
    printf("The before address of num =%u\n",ptr);
    ptr++;
    printf("The after address of num =%u\n\n",ptr);
    int nm=10;
    int *pr=&nm;
    printf("The before address of nm =%u\n",pr);
    pr--;
    printf("The after address of nm =%u\n\n",pr);
    int n=10;
    int *p=&n;
    printf("The before address of n =%u\n",p);
    p++;
    printf("The after address of n =%u\n",p);
    int *j=&p;
    p-j;
    printf("The after address of n=%d\n\n",p-j);
    return 0;



}
