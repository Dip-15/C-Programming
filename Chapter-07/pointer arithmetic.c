#include<stdio.h>
int main()
{
    int i=123;
    int*ptr=&i;
    printf("The before address of i: %u\n",ptr);
    ptr=ptr+4;
    printf("The after address of i: %u\n\n",ptr);

    char j='a';
    char*pr=&j;
    printf("The before address of j: %u\n",pr);
    pr++;
    printf("The after address of j: %u\n\n",pr);

    float k=12.3;
    float*p=&k;
    printf("The before address of k: %u\n",p);
    p++;
    printf("The after address of k: %u\n",p);
    return 0;
}
