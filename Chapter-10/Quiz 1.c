#include<stdio.h>
int main()
{
    FILE*ptr;
    int num1;
    int num2;
    ptr=fopen("just.txt","r");
    if(ptr==NULL)
    {
        printf("This file dose not exit");
    }
    else
    {
        fscanf(ptr,"%d",&num1);
        fscanf(ptr,"%d",&num2);
        fclose(ptr);
        printf("The value of num1 =%d\n",num1);
        printf("The value of num2 =%d\n",num2);
    }
    return 0;
}
