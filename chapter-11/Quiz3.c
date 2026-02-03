#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int*ptr;
    printf("Enter the number:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Put the value in ptr[%d]:",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int j=0;j<n;j++)
    {
        printf("ptr[%d]=%d\n",j+1,ptr[j]);
    }
    free(ptr);
    return 0;
}
