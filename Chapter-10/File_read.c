#include<stdio.h>
int main()
{
    FILE*ptr;
    int num1;
    int num2;
    ptr=fopen("File read.txt","r");
    fscanf(ptr,"%d",&num1);
    fscanf(ptr,"%d",&num2);
    fclose(ptr);
    printf("The value of num is = %d\n",num1);
    printf("The value of num is = %d\n",num2);
    return 0;
}
