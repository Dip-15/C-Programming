#include<stdio.h>
int main()
{
    FILE*ptr;
    int a,b,c,d;
    ptr=fopen("Q1.txt","r");
    fscanf(ptr,"%d",&a);
    fscanf(ptr,"%d",&b);
    fscanf(ptr,"%d",&c);
    fscanf(ptr,"%d",&d);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    printf("d=%d\n",d);
    return 0;


}
