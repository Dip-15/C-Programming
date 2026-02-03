#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*ptr;
    ptr=(int*)malloc(6*sizeof(int));
    for(int i=0;i<6;i++)
    {
        printf("Enter the number in ptr[%d]:",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++)
    {
        printf("The value in ptr[%d]=%d\n",i+1,ptr[i]);
    }
    return 0;
}
